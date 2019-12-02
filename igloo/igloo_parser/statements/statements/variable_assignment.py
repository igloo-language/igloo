import igloo_parser.data_types as dt


class VariableAssignment:
    def variable_assignment_statement(self):
        # variable_assignment_statement: id "=" expression ";"
        position = [self.lexer_obj.pos]
        self.lexer_obj.set_checkpoint()  # Create checkpoint to go back if fails

        if (_id := self.ID()) is False:
            self.go_back()
            return False

        position.append(self.lexer_obj.pos)
        if not self.equals():
            self.parser_log.add_point(
                self.lexer_obj.pos, "Expected `=`", self.lexer_obj.peek(), 1
            )
            self.go_back()
            return False

        position.append(self.lexer_obj.pos)
        if (expression := self.expression()) is False:
            self.parser_log.add_point(
                self.lexer_obj.pos, "Expected an expression", self.lexer_obj.peek(), 2
            )
            self.go_back()
            return False

        position.append(self.lexer_obj.pos)
        if not self.semicolon():
            self.parser_log.add_point(
                self.lexer_obj.pos, "Expected `;`", self.lexer_obj.peek(), 3
            )
            self.go_back()
            return False

        return dt.VariableAssignment(_id, expression, position)
