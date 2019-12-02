import errors
from igloo_parser.data_types import Kwarg, RunArguments


class UndefinedFunction(errors.Error):
    def __init__(self, message):
        self.message = message
        self.error = self.__class__.__name__


def function_run(self, statement):
    evaled_arguements = RunArguments(
        [self.eval_expression(pos_arg) for pos_arg in statement.arguments.pos_args],
        [
            Kwarg(kwarg._id, self.eval_expression(kwarg.value), kwarg.pos)
            for kwarg in statement.arguments.kwargs
        ],
    )
    if statement.id in self.global_objects["OBJECTS"]:
        return self.global_objects["OBJECTS"][statement.id].function_run(
            evaled_arguements, statement.pos
        )
    elif statement.id in self.objects:
        return self.objects[statement.id].function_run(evaled_arguements, statement.pos)
    else:
        self.error_log.add_point(
            self.global_objects["FILENAME"],
            self.global_objects["CONTENTS"],
            statement.id.pos,
        )
        self.error_log.throw(
            UndefinedFunction(f"Undefined function `{statement.id.value}`")
        )
