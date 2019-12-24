from .statement import Statement


class ReturnStatement(Statement):
    def __init__(self, expression, pos):
        self.expression = expression
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


class Kwarg:
    def __init__(self, _id, value, pos):
        self.id = _id
        self.value = value
        self.pos = pos

    def __hash__(self):
        return hash(self.id.value)

    def __eq__(self, other):
        return self.value == other.value


class FunctionRun(Statement):
    def __init__(self, _id, arguments, pos):
        self.id = _id
        self.arguments = arguments
        self.pos = pos
