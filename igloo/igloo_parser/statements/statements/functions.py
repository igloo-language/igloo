import igloo_parser.data_types as dt


class Functions:
    def function_run_statement(self):
        # function_run_statement: ID "(" arguments ")" ";"
        position = self.lexer_obj.pos
        self.lexer_obj.set_checkpoint()  # Create checkpoint to go back if fails

        if (_id := self.ID()) is False:
            self.go_back()
            return False

        if self.lp() is False:
            self.go_back()
            self.parser_log.add_point(
                self.lexer_obj.pos, 'Expected "("', self.lexer_obj.peek(), 1
            )
            return False

        if (arguments := self.arguments_running()) is False:
            return False

        if self.rp() is False:
            self.go_back()
            self.parser_log.add_point(
                self.lexer_obj.pos, 'Expected ")"', self.lexer_obj.peek(), 2
            )
            return False
        if not self.semicolon():
            self.parser_log.add_point(
                self.lexer_obj.pos, 'Expected ";"', self.lexer_obj.peek(), 3
            )
            self.go_back()
            return False

        return dt.FunctionRun(_id, arguments, position)

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

        if self.lp() is False:
            self.go_back()
            self.parser_log.add_point(
                self.lexer_obj.pos, 'Expected "("', self.lexer_obj.peek(), 2
            )
            return False

        if (arguments := self.arguments()) is False:
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

        if self.rcp() is False:
            self.go_back()
            return False

        return dt.FunctionDefine(_id, arguments, block, position)

    def arguments_running(self):
        # arguments_running: {ID ","} {kwargs ","}
        pos_args = []
        kwargs = []

        # TODO: Fix it
        while True:
            pos = self.lexer_obj.pos
            print(self.lexer_obj.peek())
            if (expr := self.expression()) is not False:
                if self.comma():
                    pos_args.append(expr)
                else:
                    if self.expression() is not False:
                        self.parser_log.add_point(
                            self.lexer_obj.pos,
                            "Expected a comma",
                            self.lexer_obj.peek(),
                            1,
                        )
                        self.parser_log.throw()
                    else:
                        self.lexer_obj.pos = pos
                        break
            else:
                break

        while True:
            if (kwarg := self.kwarg()) is not False:
                if self.comma():
                    kwargs.append(kwarg)
                else:
                    if self.expression() is not False:
                        self.parser_log.add_point(
                            self.lexer_obj.pos,
                            "Expected a comma",
                            self.lexer_obj.peek(),
                            1,
                        )
                        self.parser_log.throw()
                    else:
                        kwargs.append(expr)
                        break
            else:
                break

        return dt.RunArguments(pos_args, kwargs)

    def arguments(self):
        # arguments: {ID ","} {question_id ","} {kwarg ","}
        pos_args = []
        optional_pos_args = []
        kwargs = []

        while True:
            if (_id := self.lexer_obj.peek()).type == "IDENTIFIER":
                self.lexer_obj.consume()
                if self.lexer_obj.peek().type != "QUESTION":
                    if self.comma() is not False:
                        pos_args.append(_id)
                    else:
                        if self.lexer_obj.peek().type == "IDENTIFIER":
                            self.parser_log.add_point(
                                self.lexer_obj.pos,
                                "Expected a comma",
                                self.lexer_obj.peek(),
                                1,
                            )
                            self.parser_log.throw()
                        else:
                            pos_args.append(_id)
                            break
                else:
                    self.lexer_obj.go_back()
                    break
            else:
                break

        while True:
            if (_id := self.question_id()) is not False:
                if self.comma() is not False:
                    optional_pos_args.append(_id)
                else:
                    if self.lexer_obj.peek().type == "IDENTIFIER":
                        self.parser_log.add_point(
                            self.lexer_obj.pos,
                            "Expected a comma",
                            self.lexer_obj.peek(),
                            1,
                        )
                        print("hi")
                        self.parser_log.throw()
                    else:
                        optional_pos_args.append(_id)
                        break
            else:
                break

        while True:
            if (kwarg := self.kwarg()) is not False:
                if self.comma():
                    kwargs.append(kwarg)
                else:
                    if self.lexer_obj.peek().type == "IDENTIFIER":
                        self.parser_log.add_point(
                            self.lexer_obj.pos,
                            "Expected a comma",
                            self.lexer_obj.peek(),
                            1,
                        )
                        self.parser_log.throw()
                    else:
                        kwargs.append(kwarg)
                        break
            else:
                break

        return dt.Arguments(pos_args, optional_pos_args, kwargs)

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
