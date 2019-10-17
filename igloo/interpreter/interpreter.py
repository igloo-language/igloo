import interpreter.data_types as idt
import parser.data_types as pdt
import lexer
import parser
import errors


class Program:
    from interpreter.statements import (
        variable_assignment,
        inline_code,
        eval_expression,
        eval_int,
        eval_id_name,
        eval_id,
        eval_multiplication,
        eval_modulo,
        eval_addition,
        eval_subtraction,
        eval_division,
        eval_negative,
        eval_string,
    )

    def __init__(self, filename, text):
        self.error_log = errors.Logger({})
        self.global_objects = {
            "ERROR": self.error_log,
            "POS": 0,
            "CONTENTS": text,
            "FILENAME": filename,
        }
        self.lx = lexer.Lexer(
            lexer.DEFULT_IGLOO_LEXER, self.global_objects, skip_whitespace=True
        )

        self.parser = parser.Parser(self.lx, self.global_objects)
        self.ast = self.parser.parse()

        self.objects = {}
        self.objects[idt.ID("__file", 0)] = filename

        self.global_objects["ERROR"].global_obj = self.global_objects

        self.statement_dict = {
            pdt.VariableAssignment: self.variable_assignment,
            pdt.InlineCode: self.inline_code,
        }

    def run(self):
        for statement in self.ast.statements:
            self.global_objects["POS"] = statement.pos
            self.statement_dict[type(statement)](statement)
