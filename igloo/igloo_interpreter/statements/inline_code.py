from igloo_interpreter.data_types import *


def inline_code(self, statement):
    exec(statement.value.value)
