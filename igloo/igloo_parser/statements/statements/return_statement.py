import igloo_parser.data_types as dt


class Return:
    def expression_return(self):
        # expression_return: expr "."
        position = [self.lexer_obj.pos]
        pos = position[0]  # Create checkpoint to go back if fails

        if (expr := self.expression()) is False:
            self.lexer_obj.pos = pos
            return False
        
        if not self.double_semicolon():
            self.lexer_obj.pos = pos
            self.point = self.parser_log.add_point(
                self.lexer_obj.pos, "Expected `;;`", self.lexer_obj.peek(), 1
            )
            return False

        return dt.ReturnStatement(expr, position)

    def return_statement(self):
        # return_statement: return expr? ";"
        position = [self.lexer_obj.pos]
        pos = position[0]  # Create checkpoint to go back if fails

        return_value = dt.Null("null", position)

        position.append(self.lexer_obj.pos)
        if self.return_keyword() is False:
            self.lexer_obj.pos = pos
            return False

        position.append(self.lexer_obj.pos)
        if (expr := self.expression()) is not False:
            return_value = expr

        position.append(self.lexer_obj.pos)
        if not self.semicolon():
            self.point = self.parser_log.add_point(
                self.lexer_obj.pos, "Expected `;`", self.lexer_obj.peek(), 1
            )
            self.lexer_obj.pos = pos
            return False

        return dt.ReturnStatement(return_value, position)
