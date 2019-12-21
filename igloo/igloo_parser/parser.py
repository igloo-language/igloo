import igloo_parser.data_types as dt
import igloo_parser.statements as statements


class Parser(
    statements.Maths,
    statements.Functions,
    statements.Expressions,
    statements.InlineCode,
    statements.Terminals,
    statements.Literals,
    statements.VariableAssignment,
    statements.Return,
):
    def __init__(self, lexer_obj, global_objects):
        self.lexer_obj = lexer_obj
        self.parser_log = dt.BackTracker(global_objects)
        self.error_logger = global_objects.error
        self.ast = dt.Block([])
        self.filename = global_objects.filename

    def go_back(self):
        self.lexer_obj.back_checkpoint()

    def parse(self):
        self.ast.add_statement_list(self.block())
        if not self.EOF():
            self.parser_log.throw()
        return self.ast

    def block(self):
        code = []
        _statements = [
            self.variable_assignment_statement,
            self.inline_code_statement,
            self.function_declaration_statement,
            self.function_run_statement,
            self.return_statement,
            self.expression_return,
        ]
        while True:
            for function in _statements:
                statement = function()
                if statement is not False:
                    code.append(statement)
                    fail = False
                    break
                fail = True
            if self.lexer_obj.peek().type == "COMMENT":  # Comment ignore and pass over
                self.lexer_obj.consume()
                continue
            if self.lexer_obj.peek().type == "EOF" and not self.parser_log.logs:  # End of file no error
                break
            if fail and self.parser_log.logs:  # Fail with bad expression/statement
                self.parser_log.throw()
            elif fail and not self.parser_log.logs:  # Empty code
                pass
        return code
