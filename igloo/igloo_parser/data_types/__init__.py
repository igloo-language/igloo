from .expressions import *  # noqa
from .functions import *  # noqa
from .math import *  # noqa
from .parsing_types import *  # noqa
from .statement import *  # noqa
from .statements import *  # noqa
from .syntax import *  # noqa


class Block:
    def __init__(self, statements):
        self.statements = statements

    def add_statement(self, statement):
        self.statements.append(statement)

    def add_statement_list(self, list_statements):
        self.statements.extend(list_statements)
