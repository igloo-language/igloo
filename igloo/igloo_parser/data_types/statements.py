from .statement import Statement


class VariableAssignment(Statement):
    def __init__(self, _id, value, pos):
        self.id = _id
        self.value = value
        self.pos = _id.pos


class InlineCode(Statement):
    def __init__(self, inline, pos):
        self.value = inline
        self.pos = pos
