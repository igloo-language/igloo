class Type:
    def __init__(self, value, _type, pos):
        self.value = value
        self.type = _type
        self.pos = pos

    def __eq__(self, other):
        return other.value == self.value

    def __hash__(self):
        return hash(self.value)

    def __add__(self, other):
        return self.__class__(self.value + other.value, self.pos)

    def __mul__(self, other):
        return self.__class__(self.value * other.value, self.pos)

    def __sub__(self, other):
        return self.__class__(self.value - other.value, self.pos)

    def __truediv__(self, other):
        return self.__class__(self.value / other.value, self.pos)

    def __mod__(self, other):
        return self.__class__(self.value % other.value, self.pos)

    def __str__(self):
        return str(self.value)


class Integer(Type):
    def __init__(self, value, pos):
        self.value = int(value)
        self.pos = pos


class ID(Type):
    def __init__(self, value, pos):
        self.value = str(value)
        self.pos = pos


class String(Type):
    def __init__(self, value, pos):
        self.value = str(value)
        self.pos = pos


class Function:
    def __init__(self, pos_args, optional_pos_args, kwargs):
        self.pos_args = pos_args
        self.optional_pos_args = optional_pos_args
        self.kwargs = kwargs
