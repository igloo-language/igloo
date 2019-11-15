class Literals:
    # Parsing literals
    def literal(self, _type):
        if self.lexer_obj.peek().type == _type:
            self.lexer_obj.consume()
            return True
        return False

    def func(self):
        # To parse "func"
        return self.literal("FUNC")

    def return_keyword(self):
        # To parse "func"
        return self.literal("RETURN")

    def EOF(self):
        # To parse "eof"
        return self.literal("EOF")

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

    def question(self):
        # To parse "?"
        return self.literal("QUESTION")

    def lp(self):
        # To parse "("
        return self.literal("LP")

    def rp(self):
        # To parse ")"
        return self.literal("RP")

    def lcp(self):
        # To parse "{"
        return self.literal("LCP")

    def rcp(self):
        # To parse "}"
        return self.literal("RCP")

    def equals(self):
        # To parse "="
        return self.literal("EQUALS")

    def semicolon(self):
        # To parse ";"
        return self.literal("SEMICOLON")

    def comma(self):
        # To parse ";"
        return self.literal("COMMA")
