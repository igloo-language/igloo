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
        self.logger = global_obj["ERROR"]
        self.global_obj = global_obj
        self.error = ""

    def add_point(self, location, message, token, length):
        self.logs[ParseErrorTrack(location, message, token)] = length

    def get_max_parses(self):
        if self.logs:
            max_values = [
                key
                for m in [min(self.logs.values())]
                for key, val in self.logs.items()
                if val == m
            ]
            return max_values
        else:
            print("Oh noes something went wrong")
            quit()

    def clear(self):
        self.logs.clear()

    def throw(self):
        self.logger.add_point(
            self.global_obj["FILENAME"],
            self.global_obj["CONTENTS"],
            self.get_max_parses()[0].location,
        )
        self.logger.throw(self)

    def __str__(self):
        max_values = self.get_max_parses()
        if platform.system() == "Windows":
            os.system("color")
        red = "\033[91m"
        white = "\033[0m"
        self.error = f'{red}SyntaxError: {" or ".join(map(lambda x: x.message, max_values)).capitalize()} found "{max_values[0].token.value}"{white}'
        return self.error


class ParseErrorTrack:
    def __init__(self, location, message, token):
        self.location = location
        self.message = message
        self.token = token


class Statement:
    def __init__(self, _type):
        self.type = _type


class VariableAssignment(Statement):
    def __init__(self, id, value, pos):
        self.id = id
        self.value = value
        self.pos = id.pos


class InlineCode(Statement):
    def __init__(self, inline, pos):
        self.value = inline
        self.pos = pos


class FunctionDefine(Statement):
    def __init__(self, id, pos, pos_args=[], kwargs={}):
        self.id = id
        self.pos_args = pos_args
        self.kwargs = kwargs

    def add_pos_arg(self, element):
        self.pos_args.append(element)

    def add_kwarg(self, id, element):
        self.kwargs[id] = element


class Expression:
    def __init__(self, _type, value, pos):
        self.type = _type
        self.value = value
        self.pos = pos


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
