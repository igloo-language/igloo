import igloo_parser.data_types as dt


class Return:
    def expression_return(self):
        # expression_return: expr ";"
        position = self.lexer_obj.pos
        self.lexer_obj.set_checkpoint()  # Create checkpoint to go back if fails

        if (expr := self.expression()) is False:
            self.go_back()
            return False

        if not self.semicolon():
            self.parser_log.add_point(
                self.lexer_obj.pos, 'Expected `;`', self.lexer_obj.peek(), 1
            )
            self.go_back()
            return False

        return dt.ReturnStatement(expr, position)

    def return_statement(self):
        # return_statement: return expr? ";"
        position = self.lexer_obj.pos
        self.lexer_obj.set_checkpoint()  # Create checkpoint to go back if fails

        return_value = dt.Null("null", position)

        if self.return_keyword() is False:
            self.go_back()
            return False

        if (expr := self.expression()) is not False:
            return_value = expr

        if not self.semicolon():
            self.point = self.parser_log.add_point(
                self.lexer_obj.pos, 'Expected `;`', self.lexer_obj.peek(), 1
            )
            self.go_back()
            return False

        return dt.ReturnStatement(return_value, position)
