class VerboseLogger:
    def __init__(self, verbose):
        self.verbose = verbose

    def log(self, message):
        if self.verbose:
            print(message)


class Objects:
    def __init__(
        self,
        error=None,
        pos=0,
        contents="",
        filename="",
        objects={},
        logger=None,
        verbose=False,
    ):
        self.error = error
        self.pos = pos
        self.contents = contents
        self.filename = filename
        self.objects = objects
        self.logger = logger
        self.verbose = verbose


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

    def debug(self):
        return f"{self.__class__.__name__}: {self.value}"

    def string(self):
        return f"{self.value}"


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

    def string(self):
        return f"{self.value[1:-1]}"


class Null(Type):
    def __init__(self, pos):
        self.value = "null"
        self.pos = pos
