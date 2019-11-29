import igloo_parser.data_types as dt


class Terminals:
    def non_literal(self, _type, class_obj):
        if (obj := self.lexer_obj.peek()).type == _type:
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

    def null(self):
        # To parse inline
        return self.non_literal("NULL", dt.Null)

    def function_run(self):
        # function_run: ID "(" arguments ")"
        position = self.lexer_obj.pos
        self.lexer_obj.set_checkpoint()  # Create checkpoint to go back if fails

        if (_id := self.ID()) is False:
            self.go_back()
            return False

        if self.lp() is False:
            self.go_back()
            self.parser_log.add_point(
                self.lexer_obj.pos, 'Expected `(`', self.lexer_obj.peek(), 1
            )
            return False

        if (arguments := self.arguments_running()) is False:
            return False

        if self.rp() is False:
            self.go_back()
            self.parser_log.add_point(
                self.lexer_obj.pos, 'Expected `)`', self.lexer_obj.peek(), 2
            )
            return False

        return dt.FunctionRun(_id, arguments, position)
