import igloo_parser.data_types as dt


class Expressions:
    # To parse expressions
    def expression(self):
        # expression: term (( "+" | "-" ) term)*
        dictionary = {
            self.addition: dt.Add,
            self.subtract: dt.Sub,
        }  # For AST generation

        self.lexer_obj.set_checkpoint()  # Create checkpoint to go back if fails

        # To parse term
        if (term := self.term()) is False:
            self.go_back()
            self.parser_log.add_point(
                self.lexer_obj.pos, "Expected an expression", self.lexer_obj.peek(), 1
            )
            return False

        # To parse (( "+" | "-" ) term)
        is_true = True
        while is_true:
            for operator, ast_class in dictionary.items():
                if operator() is not False:
                    if (group2 := self.term()) is not False:
                        term = ast_class(
                            term, group2
                        )  # Run operator function and assign an AST type for them
                        is_true = True

                        break
                    else:
                        self.go_back()
                        self.parser_log.add_point(
                            self.lexer_obj.pos,
                            "Expected an expression",
                            self.lexer_obj.peek(),
                            2,
                        )
                        return False
                else:
                    is_true = False

        return term
