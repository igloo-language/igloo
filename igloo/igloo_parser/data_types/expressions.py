class Expression:
    def __init__(self, _type, value, pos):
        self.type = _type
        self.value = value
        self.pos = pos

    def __hash__(self):
        return hash(self.value)

    def __eq__(self, first):
        return self.value == first.value

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