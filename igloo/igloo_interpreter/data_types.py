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


class Null(Type):
    def __init__(self, value, pos):
        self.value = value
        self.pos = pos


class Function:
    def __init__(self, _id, arguments, code, global_objects, pos):
        self.id = _id
        self.arguments = arguments
        self.code = code
        self.pos = pos
        self.local_variables = {}
        self.global_objects = global_objects

    def run(self, pos_arguments, optional_pos_arguments, kwargs):
        # TODO: Make this work
        print(pos_arguments, optional_pos_arguments, kwargs)
