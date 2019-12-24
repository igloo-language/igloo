import re
import errors


DEFULT_IGLOO_LEXER = [
    (r"//.*", "COMMENT"),
    (r'".*?"', "STRING"),
    (r"`.*?`", "INLINE"),
    (r"func\s", "FUNC"),
    (r"import\s", "IMPORT"),
    (r"return\s", "RETURN"),
    (r"null", "NULL"),
    (r"[a-zA-Z_][a-zA-Z_0-9]*", "IDENTIFIER"),
    (r"\d+", "INTEGER"),
    (r"\+", "ADD"),
    (r"\-", "SUBTRACT"),
    (r"\*", "MULTIPLY"),
    (r"\/", "DIVIDE"),
    (r"%", "MODULO"),
    (r"\(", "LP"),
    (r"\)", "RP"),
    (r"{", "LCP"),
    (r"}", "RCP"),
    (r"=", "EQUALS"),
    (r"\.", "DOT"),
    (r",", "COMMA"),
    (r";;", "DOUBLE_SEMICOLON"),
    (r";", "SEMICOLON"),
    (r"\?", "QUESTION"),
]


def raise_lexer_error(error_obj, filename, text, column, _type):
    error_obj.add_point(filename, text, column=column)
    error_obj.throw(_type)


class UnrecognizedToken(errors.Error):
    def __init__(self, message):
        self.message = message
        self.error = self.__class__.__name__


class Token:
    """ A simple Token structure.
        Contains the token type, value and position.
    """

    def __init__(self, _type, val, pos):
        self.type = _type
        self.value = val
        self.pos = pos

    def __str__(self):
        return f'{self.type}("{self.value}") at position {self.pos}'

    def __repr__(self):
        return f'{self.type}("{self.value}")'


class Lexer:
    def __init__(self, rules, global_objects, skip_whitespace=True):
        idx = 1
        regex_parts = []
        self.error_logger = global_objects.error
        self.group_type = {}
        self.rules = rules
        self.old_pos = 0
        self.group_pos = 0
        self.pos = 0
        self.buf = global_objects.contents
        self.filename = global_objects.filename

        for regex, _type in self.rules:
            groupname = "GROUP%s" % idx
            regex_parts.append("(?P<%s>%s)" % (groupname, regex))
            self.group_type[groupname] = _type
            idx += 1

        self.regex = re.compile("|".join(regex_parts))
        self.skip_whitespace = skip_whitespace
        self.re_ws_skip = re.compile("\S")

    def add_rule(self, rule):
        idx = 1
        regex_parts = []
        self.group_type = {}
        self.rules.append(rule)

        for regex, _type in rules:
            groupname = "GROUP%s" % idx
            regex_parts.append("(?P<%s>%s)" % (groupname, regex))
            self.group_type[groupname] = _type
            idx += 1

        self.regex = re.compile("|".join(regex_parts))

    def token(self):
        if self.pos >= len(self.buf):
            return Token("EOF", "EOF", self.pos)
        else:
            if self.skip_whitespace:
                m = self.re_ws_skip.search(self.buf, self.pos)

                if m:
                    self.pos = m.start()
                else:
                    return Token("EOF", "EOF", self.pos)

            m = self.regex.match(self.buf, self.pos)
            if m:
                groupname = m.lastgroup
                tok_type = self.group_type[groupname]
                tok = Token(tok_type, m.group(groupname), self.pos)
                self.old_pos = self.pos
                self.pos = m.end()
                return tok

            # if we're here, no rule matched
            raise_lexer_error(
                self.error_logger,
                self.filename,
                self.buf,
                self.pos,
                UnrecognizedToken(f"Unrecognized input token"),
            )

    def previous(self):
        self.pos = self.old_pos
        if self.pos >= len(self.buf):
            return Token("EOF", "EOF", self.pos)
        else:
            if self.skip_whitespace:
                m = self.re_ws_skip.search(self.buf, self.pos)

                if m:
                    self.pos = m.start()
                else:
                    return Token("EOF", "EOF", self.pos)

            m = self.regex.match(self.buf, self.pos)
            if m:
                groupname = m.lastgroup
                tok_type = self.group_type[groupname]
                tok = Token(tok_type, m.group(groupname), self.pos)
                self.pos = m.end()
                return tok

        raise_lexer_error(
            self.error_logger,
            self.filename,
            self.buf,
            self.pos,
            UnrecognizedToken(f"Unrecognized input token"),
        )

    def peek(self):
        if self.pos >= len(self.buf):
            return Token("EOF", "EOF", self.pos)
        else:
            if self.skip_whitespace:
                m = self.re_ws_skip.search(self.buf, self.pos)

                if m:
                    self.pos = m.start()
                else:
                    return Token("EOF", "EOF", self.pos)

            m = self.regex.match(self.buf, self.pos)
            if m:
                groupname = m.lastgroup
                tok_type = self.group_type[groupname]
                tok = Token(tok_type, m.group(groupname), self.pos)

                self.next_pos = m.end()
                return tok

            raise_lexer_error(
                self.error_logger,
                self.filename,
                self.buf,
                self.pos,
                UnrecognizedToken(f"Unrecognized input token"),
            )

    def set_checkpoint(self):
        self.group_pos = self.pos

    def back_checkpoint(self):
        self.pos = self.group_pos

    def consume(self):
        self.old_pos = self.pos
        self.pos = self.next_pos

    def go_back(self):
        self.pos = self.old_pos

    def tokens(self):
        temp_pos = self.pos

        while True:
            tok = self.token()
            if tok.type == "EOF":
                break
            yield tok

        self.pos = temp_pos


if __name__ == "__main__":
    rules = [
        ("\d+", "NUMBER"),
        ("[a-zA-Z_]\w+", "IDENTIFIER"),
        ("\+", "PLUS"),
        ("\-", "MINUS"),
        ("\*", "MULTIPLY"),
        ("\/", "DIVIDE"),
        ("\(", "LP"),
        ("\)", "RP"),
        ("=", "EQUALS"),
    ]

    lx = Lexer(rules, errors.Logger({}), skip_whitespace=True)
    lx.input(r"erw = % _abc + 12*(R4-623902)")

    print(lx.token())  # IDENTIFIER("erw")
    print(lx.token())  # EQUALS("=")
    lx.set_checkpoint()
    lx.add_rule(("%", "MODULO"))
    print(lx.token())  # MODULO("%")
    lx.set_checkpoint()
    print(lx.token())
    print(lx.token())
    print(lx.token())
    lx.back_checkpoint()
    print(lx.token())
