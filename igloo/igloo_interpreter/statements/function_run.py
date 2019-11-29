import errors

class UndefinedFunction(errors.Error):
    def __init__(self, message):
        self.message = message
        self.error = self.__class__.__name__

def function_run(self, statement):
    if statement.id in self.global_objects["OBJECTS"]:
        self.global_objects["OBJECTS"][statement.id].function_run(statement.arguments, statement.pos)
    elif statement.id in self.objects:
        self.objects[statement.id].function_run(statement.arguments, statement.pos)
    else:
        self.error_log.add_point(
            self.global_objects["FILENAME"], self.global_objects["CONTENTS"], statement.id.pos
        )
        self.error_log.throw(UndefinedFunction(f'Undefined function `{statement.id.value}`'))
