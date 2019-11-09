import igloo_parser.data_types as dt


class Functions:
    def function_declaration_statement(self):
        # function_declaration_statement: func ID "(" arguments ")" "{" block "}"
        position = self.lexer_obj.pos
        self.lexer_obj.set_checkpoint()  # Create checkpoint to go back if fails

        if self.func() is False:
            self.go_back()
            return False

        if (_id := self.ID()) is False:
            self.go_back()
            self.parser_log.add_point(
                self.lexer_obj.pos, "Expected an ID", self.lexer_obj.peek(), 1
            )
            return False

        func_obj = dt.FunctionDefine(_id, position)

        if self.lp() is False:
            self.go_back()
            self.parser_log.add_point(
                self.lexer_obj.pos, 'Expected "("', self.lexer_obj.peek(), 2
            )
            return False

        if (arguments := self.arguments(func_obj)) is False:
            return False

        if self.rp() is False:
            self.go_back()
            self.parser_log.add_point(
                self.lexer_obj.pos, 'Expected ")"', self.lexer_obj.peek(), 3
            )
            return False

        if self.lcp() is False:
            self.go_back()
            return False

        block = self.block()

        func_obj.add_code(block)
        print(func_obj.kwargs, func_obj.kwargs, func_obj.pos_args, func_obj.optional_pos_arg)
        return func_obj

    def arguments(self, function_obj):
        # arguments: {ID ","} {question_id ","} {kwarg ","}
        while True:
            if (_id := self.lexer_obj.peek()).type == "IDENTIFIER":
                self.lexer_obj.consume()
                if self.lexer_obj.peek().type != "QUESTION":
                    if self.comma() is not False:
                        function_obj.add_pos_arg(_id)
                    else:
                        self.parser_log.add_point(
                            self.lexer_obj.pos, "Expected a comma", self.lexer_obj.peek(), 1
                        )
                else:
                    self.lexer_obj.go_back()
                    break
            else:
                break

        while True:
            if (_id := self.question_id()) is not False:
                if self.comma() is not False:
                    function_obj.add_optional_pos_arg(_id)
                else:
                    self.parser_log.add_point(
                        self.lexer_obj.pos, "Expected a comma", self.lexer_obj.peek(), 2
                    )
            else:
                break

        while True:
            if (kwarg := self.kwarg()) is not False:
                if self.comma() is not False:
                    function_obj.add_kwarg(kwarg)
                else:
                    self.go_back()
                    self.parser_log.add_point(
                        self.lexer_obj.pos, "Expected a comma", self.lexer_obj.peek(), 3
                    )
            else:
                break
        
        return True

    def question_id(self):
        # question_id: ID "?"
        self.lexer_obj.set_checkpoint()  # Create checkpoint to go back if fails

        if (_id := self.ID()) is False:
            self.parser_log.add_point(
                self.lexer_obj.pos, "Expected an ID", self.lexer_obj.peek(), 1
            )
            self.go_back()
            return False

        if not (self.lexer_obj.peek().type == "QUESTION") and not self.equals():
            self.parser_log.add_point(
                self.lexer_obj.pos, 'Expected "?"', self.lexer_obj.peek(), 2
            )
            self.go_back()
            return False
        elif not (self.lexer_obj.peek().type == "QUESTION"):
            self.go_back()
            return False
        
        self.lexer_obj.consume()
        
        return _id

    def kwarg(self):
        # kwarg: ID "=" expression
        position = self.lexer_obj.pos
        self.lexer_obj.set_checkpoint()  # Create checkpoint to go back if fails

        if (_id := self.ID()) is False:
            self.go_back()
            return False

        if not self.equals():
            self.parser_log.add_point(
                self.lexer_obj.pos, 'Expected "="', self.lexer_obj.peek(), 1
            )
            self.go_back()
            return False

        if (expression := self.expression()) is False:
            self.parser_log.add_point(
                self.lexer_obj.pos, "Expected an expression", self.lexer_obj.peek(), 2
            )
            self.go_back()
            return False

        return dt.Kwarg(_id, expression, position)