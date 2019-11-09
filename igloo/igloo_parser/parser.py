import igloo_parser.data_types as dt
import errors
import igloo_parser.statements as statements


class Parser(statements.Maths, statements.Functions, statements.Expressions, statements.InlineCode, statements.Terminals, statements.Literals, statements.VariableAssignment):
    def __init__(self, lexer_obj, global_objects):
        self.lexer_obj = lexer_obj
        self.parser_log = dt.BackTracker(global_objects)
        self.error_logger = global_objects["ERROR"]
        self.ast = dt.Block([])
        self.filename = global_objects["FILENAME"]

    def go_back(self):
        self.lexer_obj.back_checkpoint()

    def parse(self):
        self.ast.add_statement_list(self.block())
        if not self.EOF():
            self.parser_log.throw()
        return self.ast

    def block(self):
        print(self.lexer_obj.peek())
        code = []
        _statements = [
            self.variable_assignment_statement,
            self.inline_code_statement,
            self.function_declaration_statement,
        ]
        is_not_break = True
        while is_not_break:
            for function in _statements:
                statement = function()
                if statement != False:
                    code.append(statement)
                    fail = False
                    break
                fail = True
            if self.lexer_obj.peek().type == "COMMENT":
                self.lexer_obj.consume()
                continue
            if self.lexer_obj.peek().type == "EOF" and not self.parser_log.logs:
                break
            elif fail:
                if self.rcp():
                    break
                elif self.parser_log.logs:
                    self.parser_log.throw()
                else:
                    self.parser_log.add_point(
                        self.lexer_obj.pos,
                        "Expected valid statement",
                        self.lexer_obj.peek(),
                        float("inf"),
                    )
                    break
            else:
                continue

        return code
