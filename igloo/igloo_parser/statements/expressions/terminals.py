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