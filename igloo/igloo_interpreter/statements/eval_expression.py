import errors
import igloo_interpreter.data_types as dt


class UndefinedVariable(errors.Error):
    def __init__(self, message):
        self.message = message
        self.error = self.__class__.__name__


class Expressions:
    def eval_expression(self, token):
        type_to_function = {
            "FunctionRun": self.eval_function_run,
            "Integer": self.eval_int,
            "String": self.eval_string,
            "ID": self.eval_id,
            "Mul": self.eval_multiplication,
            "Add": self.eval_addition,
            "Sub": self.eval_subtraction,
            "Mod": self.eval_modulo,
            "Div": self.eval_division,
            "Negative": self.eval_negative,
            "Null": self.eval_null,
        }
        value = "An error occurred"
        if token.__class__.__name__ not in type_to_function:
            print(
                f"Unknown token type {token.__class__.__name__} with contents {token}"
            )
        elif token.__class__.__name__ in type_to_function:
            value = type_to_function[token.__class__.__name__](token)

        return value

    def eval_function_run(self, token):
        return self.function_run(token)

    def eval_multiplication(self, token):
        return self.eval_expression(token.obj1) * self.eval_expression(token.obj2)

    def eval_addition(self, token):
        return self.eval_expression(token.obj1) + self.eval_expression(token.obj2)

    def eval_subtraction(self, token):
        return self.eval_expression(token.obj1) - self.eval_expression(token.obj2)

    def eval_modulo(self, token):
        return self.eval_expression(token.obj1) % self.eval_expression(token.obj2)

    def eval_division(self, token):
        return self.eval_expression(token.obj1) / self.eval_expression(token.obj2)

    @staticmethod
    def eval_negative(token):
        return dt.Integer(-int(token.value.value), token.pos)

    @staticmethod
    def eval_null(token):
        return dt.Null(token.pos)

    def eval_id(self, token):
        if self.eval_id_name(token) in self.objects:
            return self.objects[self.eval_id_name(token)]
        elif self.eval_id_name(token) not in self.objects:
            self.error_log.add_point(
                self.global_objects.filename, self.global_objects.contents, token.pos,
            )
            self.error_log.throw(
                UndefinedVariable(f"Undefined variable `{token.value}`")
            )

    @staticmethod
    def eval_id_name(token):
        return dt.ID(token.value, token.pos)

    @staticmethod
    def eval_int(integer_token):
        return dt.Integer(integer_token.value, integer_token.pos)

    @staticmethod
    def eval_string(string_token):
        return dt.String(string_token.value, string_token.pos)
