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
        self.grammars = {}

    def go_back(self):
        self.lexer_obj.back_checkpoint()

    def parse(self):
        self.ast.add_statement_list(self.block())
        if not self.EOF():
            print("hi")
            self.parser_log.throw()
        return self.ast

    def block(self, as_block=False):
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
            if self.lexer_obj.peek().type == "COMMENT":  # Comment ignore and pass over
                self.lexer_obj.consume()
                continue

            pos = self.lexer_obj.pos  

            for function in _statements:
                self.lexer_obj.pos = pos
                fail = True
                if (statement := function()) != False:
                    code.append(statement)
                    fail = False
                    self.parser_log.clear()
                    break
            
            if fail and as_block:
                self.parser_log.clear()
                return code
            elif (
                self.lexer_obj.peek().type == "EOF" and not self.parser_log.logs
            ):  # End of file no error
                return code
            elif fail and self.parser_log.logs:  # Fail with bad expression/statement
                print(self.parser_log.logs)
                self.parser_log.throw()
