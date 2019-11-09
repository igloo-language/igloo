import igloo_parser.data_types as dt


class InlineCode:
    def inline_code_statement(self):
        # inline_code: inline ";"
        position = self.lexer_obj.pos
        self.lexer_obj.set_checkpoint()  # Create checkpoint to go back if fails

        if (inline := self.inline()) is False:
            self.go_back()
            return False

        if not self.semicolon():
            self.parser_log.add_point(
                self.lexer_obj.pos, 'Expected ";"', self.lexer_obj.peek(), 1
            )
            self.go_back()
            return False

        return dt.InlineCode(inline, position)
