import igloo_parser.data_types as dt


class Maths:
    def item(self):
        # item: function_run
        if (value := self.function_run()) is not False:
            return value

        # item: integer
        if (value := self.integer()) is not False:
            return value

        # item: ID
        if (value := self.ID()) is not False:
            return value

        # item: String
        if (value := self.string()) is not False:
            return value

        # item: Nill
        if (value := self.null()) is not False:
            return value

        pos = self.lexer_obj.pos
        # item: "(" expression ")"
        if self.lp():
            if (expr := self.expression()) is not False:
                if self.rp():
                    return expr
                self.go_back()
            self.lexer_obj.pos = pos

        return False

    def factor(self):
        pos = self.lexer_obj.pos

        # factor: "-" item
        if self.subtract():
            item = self.item()
            if item is not False:
                return dt.Negative(item, self.lexer_obj.pos)

        # factor: item
        if (item := self.item()) is not False:
            return item

        self.lexer_obj.pos = pos
        return False

    def term(self):
        # term: factor (( "*" | "/" | "%" ) factor)*
        dictionary = {
            self.multiply: dt.Mul,
            self.divide: dt.Div,
            self.modulo: dt.Mod,
        }  # For AST generation

        pos = self.lexer_obj.pos
        
        # To parse factor
        if (group := self.factor()) is False:
            self.lexer_obj.pos = pos
            self.parser_log.add_point(
                self.lexer_obj.pos, "Expected an expression", self.lexer_obj.peek(), 1,
            )
            return False

        # To parse (( "*" | "/" | "%" ) factor)*
        is_true = True
        while is_true:
            for operator, ast_class in dictionary.items():
                if operator() is not False:
                    if (group2 := self.factor()) is not False:
                        group = ast_class(
                            group, group2
                        )  # Run operator function and assign an AST type for them
                        is_true = True
                        break
                    else:
                        self.lexer_obj.pos = pos
                        self.parser_log.add_point(
                            self.lexer_obj.pos,
                            "Expected an expression",
                            self.lexer_obj.peek(),
                            2,
                        )
                        return False
                else:
                    is_true = False

        return group
