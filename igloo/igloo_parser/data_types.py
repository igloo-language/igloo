import platform
import os


class Block:
    def __init__(self, statements):
        self.statements = statements

    def add_statement(self, statement):
        self.statements.append(statement)

    def add_statement_list(self, list_statements):
        self.statements.extend(list_statements)


class BackTracker:
    def __init__(self, global_obj):
        self.logs = {}
        self.logger = global_obj.error
        self.global_obj = global_obj
        self.error = ""

    def add_point(self, location, message, token, length):
        self.logs[ParseErrorTrack(location, message, token)] = length

    def get_max_parses(self):
        if self.logs:
            values = self.logs.values()
            max_values = [
                key for m in [max(values)] for key, val in self.logs.items() if val == m
            ]

            locations = [value.location for value in max_values]
            dictionary = dict(zip(max_values, locations))
            final_max_values = [
                key
                for m in [max(locations)]
                for key, val in dictionary.items()
                if val == m
            ]

            return final_max_values
        else:
            print("Oh no something went wrong in data_types.py parser")
            quit()

    def clear(self):
        self.logs.clear()

    def throw(self):
        self.logger.add_point(
            self.global_obj.filename,
            self.global_obj.contents,
            self.get_max_parses()[0].location,
        )
        self.logger.throw(self)

    def __str__(self):
        max_values = self.get_max_parses()
        if platform.system() == "Windows":
            os.system("color")
        red = "\033[91m"
        white = "\033[0m"
        bold = "\033[1m"

        self.error = f'{red}{bold}SyntaxError: {" or ".join(list(set(map(lambda x: x.message, max_values)))).capitalize()} found `{max_values[0].token.value}`{white}'
        return self.error


class ParseErrorTrack:
    def __init__(self, location, message, token):
        self.location = location
        self.message = message
        self.token = token


class Statement:
    def __init__(self, _type):
        self.type = _type


class ReturnStatement(Statement):
    def __init__(self, expression, pos):
        self.expression = expression
        self.pos = pos


class VariableAssignment(Statement):
    def __init__(self, _id, value, pos):
        self.id = _id
        self.value = value
        self.pos = _id.pos


class InlineCode(Statement):
    def __init__(self, inline, pos):
        self.value = inline
        self.pos = pos


class Arguments:
    def __init__(self, pos_args, optional_pos_args, kwargs):
        self.pos_args = pos_args
        self.optional_pos_args = optional_pos_args
        self.kwargs = kwargs


class RunArguments:
    def __init__(self, pos_args, kwargs):
        self.pos_args = pos_args
        self.kwargs = kwargs


class FunctionDefine(Statement):
    def __init__(self, _id, arguments, code, pos):
        self.id = _id
        self.pos = pos
        self.arguments = arguments
        self.code = code


class Expression:
    def __init__(self, _type, value, pos):
        self.type = _type
        self.value = value
        self.pos = pos

    def __hash__(self):
        return hash(self.value)

    def __eq__(self, first):
        return self.value == first.value


class Kwarg:
    def __init__(self, _id, value, pos):
        self.id = _id
        self.value = value
        self.pos = pos

    def __hash__(self):
        return hash(self.id.value)

    def __eq__(self, other):
        return self.value == other.value


class Negative:
    def __init__(self, value, pos):
        self.value = value
        self.pos = pos


class Add:
    def __init__(self, obj1, obj2):
        self.obj1 = obj1
        self.obj2 = obj2


class Sub:
    def __init__(self, obj1, obj2):
        self.obj1 = obj1
        self.obj2 = obj2


class Mul:
    def __init__(self, obj1, obj2):
        self.obj1 = obj1
        self.obj2 = obj2


class Div:
    def __init__(self, obj1, obj2):
        self.obj1 = obj1
        self.obj2 = obj2


class Mod:
    def __init__(self, obj1, obj2):
        self.obj1 = obj1
        self.obj2 = obj2


class Integer(Expression):
    def __init__(self, value, pos):
        self.value = value
        self.pos = pos


class Float(Expression):
    def __init__(self, value, pos):
        self.value = value
        self.pos = pos


class ID(Expression):
    def __init__(self, value, pos):
        self.value = value
        self.pos = pos


class String(Expression):
    def __init__(self, value, pos):
        self.value = value
        self.pos = pos


class Inline(Expression):
    def __init__(self, value, pos):
        self.value = value[1:-1]
        self.pos = pos


class Null(Expression):
    def __init__(self, value, pos):
        self.value = value
        self.pos = pos


class FunctionRun(Statement):
    def __init__(self, _id, arguments, pos):
        self.id = _id
        self.arguments = arguments
        self.pos = pos
