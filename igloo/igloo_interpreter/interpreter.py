import igloo_interpreter.data_types as idt
import igloo_parser.data_types as pdt
from .statements import Expressions, Statements
import igloo_lexer
import igloo_parser
import errors


class PositionalArgumentError(errors.Error):
    def __init__(self, message):
        self.message = message
        self.error = self.__class__.__name__


class Program(Expressions, Statements):
    def __init__(self, filename, text, verbose=False, setup=True):
        if setup:
            self.error_log = errors.Logger({})
            self.global_objects = idt.Objects(
                error=self.error_log,
                pos=0,
                contents=text,
                filename=filename,
                objects={},
                verbose=verbose,
            )

            self.lx = igloo_lexer.Lexer(
                igloo_lexer.DEFULT_IGLOO_LEXER,
                self.global_objects,
                skip_whitespace=True,
            )

            if self.global_objects.verbose:
                for token in self.lx.tokens():
                    print(token)

            self.parser = igloo_parser.Parser(self.lx, self.global_objects)
            self.ast = self.parser.parse()

            self.objects = {}

            self.global_objects.objects.update({idt.ID("__file", 0): filename})

            self.global_objects.error.global_obj = self.global_objects

        self.statement_dict = {
            pdt.VariableAssignment: self.variable_assignment,
            pdt.InlineCode: self.inline_code,
            pdt.FunctionDefine: self.function_define,
            pdt.FunctionRun: self.function_run,
        }

    def run(self, statements):
        for statement in statements:
            self.global_objects.pos = statement.pos
            if isinstance(statement, pdt.ReturnStatement):
                return self.return_statement(statement)
            else:
                self.statement_dict[type(statement)](statement)
        return idt.Null(self.global_objects.pos)


class Function(Program):
    def __init__(self, _id, arguments, code, global_objects, pos):
        Program.__init__(
            self, global_objects.filename, global_objects.contents, setup=False
        )
        self.id = _id
        self.arguments = arguments
        self.code = code
        self.global_objects = global_objects
        self.error_log = global_objects.error
        self.pos = pos
        self.objects = {}

    def get_argument_names(self, arguments, pos):
        final_objects = {}

        num_pos_args_run = len(arguments.pos_args)
        num_kwargs_run = len(arguments.kwargs)

        num_pos_args = len(self.arguments.pos_args)
        num_opt_pos_args = len(self.arguments.optional_pos_args)
        num_kwargs = len(self.arguments.kwargs)

        print_ids = lambda list_obj: ", ".join([f"`{_id.value}`" for _id in list_obj])

        if num_pos_args_run < num_pos_args:
            self.global_objects.error.add_point(
                self.global_objects.filename,
                self.global_objects.contents,
                arguments.pos_args[-1].pos if len(arguments.pos_args) != 0 else pos[1],
            )
            self.global_objects.error.throw(
                PositionalArgumentError(
                    f"Missing positional arguments; missing: {print_ids(self.arguments.pos_args[num_pos_args_run:num_pos_args])}"
                )
            )

        elif num_pos_args_run > num_pos_args + num_opt_pos_args:
            self.global_objects.error.add_point(
                self.global_objects.filename,
                self.global_objects.contents,
                arguments.pos_args[-1].pos,
            )
            self.global_objects.error.throw(
                PositionalArgumentError(
                    f"Too many positional/optional arguments; additional arguments passed: {print_ids(arguments.pos_args[num_pos_args+num_opt_pos_args:num_pos_args_run])}"
                )
            )

        positional_arguments = arguments.pos_args[:num_pos_args]
        positional_optional_arguments = arguments.pos_args[num_pos_args:]

        positional_arguments_dictionary = dict(
            zip(self.arguments.pos_args, positional_arguments)
        )
        positional_optional_arguments_dictionary = dict(
            zip(
                self.arguments.optional_pos_args[num_pos_args_run - num_pos_args - 1 :],
                positional_optional_arguments,
            )
        )

        kwargs_dictionary = dict(
            zip(
                [kwarg.id for kwarg in self.arguments.kwargs],
                [kwarg.value for kwarg in self.arguments.kwargs],
            )
        )

        kwargs_names = set([kwarg.id for kwarg in self.arguments.kwargs])
        kwargs_names_run = set([kwarg.id for kwarg in arguments.kwargs])

        if num_kwargs_run > num_kwargs:
            kwargs_names = set([kwarg.id for kwarg in self.arguments.kwargs])
            kwargs_names_run = set([kwarg.id for kwarg in arguments.kwargs])
            self.global_objects.error.add_point(
                self.global_objects.filename,
                self.global_objects.contents,
                arguments.kwargs[num_kwargs].pos,
            )
            self.global_objects.error.throw(
                PositionalArgumentError(
                    f"Unrecognised keyword arguments; additional keyword arguments passed: {print_ids(list(kwargs_names_run-kwargs_names))}"
                )
            )

        defaults = list(kwargs_names - kwargs_names_run)

        for kwarg in arguments.kwargs:
            final_objects[kwarg.id] = kwarg.value

        for default in defaults:
            final_objects[default] = kwargs_dictionary[default]

        final_objects.update(positional_arguments_dictionary)
        final_objects.update(positional_optional_arguments_dictionary)

        return final_objects

    def function_run(self, arguments, pos):
        self.objects.update(self.get_argument_names(arguments, pos))
        return self.run(self.code)
