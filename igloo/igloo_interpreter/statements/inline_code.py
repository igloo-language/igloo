from igloo_interpreter.data_types import *
import errors
import sys, traceback

class PythonError(errors.Error):
    def __init__(self, message):
        self.message = message
        self.error = self.__class__.__name__

def inline_code(self, statement):
    try:
        exec(statement.value.value)
    except Exception as err:
        error_class = err.__class__.__name__
        detail = err.args[0]
        cl, exc, tb = sys.exc_info()
        line_number = traceback.extract_tb(tb)[-1][1]
        self.error_log.add_point(
            self.global_objects.filename, statement.value.value.split("\n")[line_number-1], 1
        )
        self.error_log.throw(PythonError(f"Error in python code \"<{error_class}> {detail}\""), no_arrow=True)


