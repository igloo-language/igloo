import igloo_interpreter.interpreter as interpreter


def function_define(self, statement):
    function = interpreter.Function(
        statement.id,
        statement.arguments,
        statement.code,
        self.global_objects,
        statement.pos,
    )
    self.global_objects["OBJECTS"][statement.id] = function
