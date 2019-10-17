import parser.data_types as dt
import errors


class Parser:
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
        return self.ast

    def block(self):
        code = []
        statements = [self.variable_assignment_statement, self.inline_code_statement]
        is_not_break = True
        while is_not_break:
            for function in statements:
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
            elif fail == True:
                if self.parser_log.logs:
                    self.parser_log.throw()
                else:
                    self.parser_log.add_point(
                        self.lexer_obj.pos,
                        "Expected valid statement",
                        self.lexer_obj.peek(),
                        1,
                    )
                    self.parser_log.throw()
            else:
                continue

        return code

    def inline_code_statement(self):
        # inline_code: inline ";"
        position = self.lexer_obj.pos
        self.lexer_obj.set_checkpoint()  # Create checkpoint to go back if fails

        inline = self.inline()
        if inline == False:
            self.go_back()
            return False

        if not self.semicolon():
            self.parser_log.add_point(
                self.lexer_obj.pos, 'Expected ";"', self.lexer_obj.peek(), 1
            )
            self.go_back()
            return False

        return dt.InlineCode(inline, position)

    def variable_assignment_statement(self):
        # variable_assignment_statement: id "=" expression ";"
        position = self.lexer_obj.pos
        self.lexer_obj.set_checkpoint()  # Create checkpoint to go back if fails

        id = self.ID()
        if id == False:
            self.go_back()
            return False

        if not self.equals():
            self.parser_log.add_point(
                self.lexer_obj.pos, 'Expected "="', self.lexer_obj.peek(), 3
            )
            self.go_back()
            return False

        expression = self.expression()
        if expression == False:
            self.parser_log.add_point(
                self.lexer_obj.pos, "Expected an expression", self.lexer_obj.peek(), 2
            )
            self.go_back()
            return False

        if not self.semicolon():
            self.parser_log.add_point(
                self.lexer_obj.pos, 'Expected ";"', self.lexer_obj.peek(), 1
            )
            self.go_back()
            return False

        return dt.VariableAssignment(id, expression, position)

    # To parse expressions
    def expression(self):
        # expression: term (( "+" | "-" ) term)*
        dictionary = {
            self.addition: dt.Add,
            self.subtract: dt.Sub,
        }  # For AST generation

        self.lexer_obj.set_checkpoint()  # Create checkpoint to go back if fails

        # To parse term
        term = self.term()
        if term == False:
            self.go_back()
            return False

        # To parse (( "+" | "-" ) term)
        is_true = True
        while is_true:
            for operator, ast_class in dictionary.items():
                if operator() != False:
                    group2 = self.term()
                    if group2 != False:
                        term = ast_class(
                            term, group2
                        )  # Run operator function and assign an AST type for them
                        is_true = True
                        break
                    else:
                        self.go_back()
                        return False
                else:
                    is_true = False

        return term

    def item(self):
        # item: integer
        value = self.integer()
        if value != False:
            return value

        # item: ID
        value = self.ID()
        if value != False:
            return value

        # item: STRING
        value = self.string()
        if value != False:
            return value

        # item: "(" expression ")"
        if self.lp():
            expr = self.expression()
            if expr != False:
                if self.rp():
                    return expr
                self.go_back()
            self.go_back()

        return False

    def factor(self):
        self.lexer_obj.set_checkpoint()  # Create checkpoint to go back if fails

        # factor: "-" item
        if self.subtract():
            item = self.item()
            if item != False:
                return dt.Negative(item, self.lexer_obj.pos)

        # factor: item
        item = self.item()
        if item != False:
            return item

        self.go_back()
        return False

    def term(self):
        # term: factor (( "*" | "/" | "%" ) factor)*
        dictionary = {
            self.multiply: dt.Mul,
            self.divide: dt.Div,
            self.modulo: dt.Mod,
        }  # For AST generation

        self.lexer_obj.set_checkpoint()  # Create checkpoint to go back if fails

        # To parse factor
        group = self.factor()
        if group == False:
            self.go_back()
            return False

        # To parse (( "*" | "/" | "%" ) factor)*
        is_true = True
        while is_true:
            for operator, ast_class in dictionary.items():
                if operator() != False:
                    group2 = self.factor()
                    if group2 != False:
                        group = ast_class(
                            group, group2
                        )  # Run operator function and assign an AST type for them
                        is_true = True
                        break
                    else:
                        self.go_back()
                        return False
                else:
                    is_true = False

        return group

    def non_literal(self, _type, class_obj):
        obj = self.lexer_obj.peek()
        if obj.type == _type:
            self.lexer_obj.consume()
            return class_obj(obj.value, obj.pos)
        return False

    def ID(self):
        # To parse IDs
        return self.non_literal("IDENTIFIER", dt.ID)

    def integer(self):
        # To parse integers
        return self.non_literal("INTEGER", dt.Integer)

    def string(self):
        # To parse strings
        return self.non_literal("STRING", dt.String)

    def inline(self):
        # To parse inline
        return self.non_literal("INLINE", dt.Inline)

    # Parsing literals
    def literal(self, _type):
        if self.lexer_obj.peek().type == _type:
            self.lexer_obj.consume()
            return True
        return False

    def subtract(self):
        # To parse "-"
        return self.literal("SUBTRACT")

    def divide(self):
        # To parse "/"
        return self.literal("DIVIDE")

    def multiply(self):
        # To parse "*"
        return self.literal("MULTIPLY")

    def addition(self):
        # To parse "+"
        return self.literal("ADD")

    def modulo(self):
        # To parse "%"
        return self.literal("MODULO")

    def lp(self):
        # To parse "("
        return self.literal("LP")

    def rp(self):
        # To parse ")"
        return self.literal("RP")

    def equals(self):
        # To parse "="
        return self.literal("EQUALS")

    def semicolon(self):
        # To parse ";"
        return self.literal("SEMICOLON")
