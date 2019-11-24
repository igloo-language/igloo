import igloo_interpreter.data_types as dt


def function_define(self, statement):
    function = dt.Function(
        statement.id, statement.arguments, statement.code, self.global_objects, statement.pos
    )
    self.objects[statement.id] = function
