import igloo_parser.data_types as dt

class Maths:
    def item(self):
        # item: integer
        if (value := self.integer()) != False:
            return value

        # item: ID
        if (value := self.ID()) != False:
            return value

        # item: STRING
        if (value := self.string()) != False:
            return value

        # item: "(" expression ")"
        if self.lp():
            if (expr := self.expression()) != False:
                if self.rp():
                    return expr
                self.go_back()
            self.go_back()

        return False

    def factor(self):
        self.lexer_obj.set_checkpoint()  # Create checkpoint to go back if fails

        # factor: "-" item
        if self.subtract():
            item = self.item()
            if item != False:
                return dt.Negative(item, self.lexer_obj.pos)

        # factor: item
        if (item := self.item()) != False:
            return item

        self.go_back()
        return False

    def term(self):
        # term: factor (( "*" | "/" | "%" ) factor)*
        dictionary = {
            self.multiply: dt.Mul,
            self.divide: dt.Div,
            self.modulo: dt.Mod,
        }  # For AST generation

        self.lexer_obj.set_checkpoint()  # Create checkpoint to go back if fails

        # To parse factor
        if (group := self.factor()) == False:
            self.go_back()
            return False

        # To parse (( "*" | "/" | "%" ) factor)*
        is_true = True
        while is_true:
            for operator, ast_class in dictionary.items():
                if operator() != False:
                    if (group2 := self.factor()) != False:
                        group = ast_class(
                            group, group2
                        )  # Run operator function and assign an AST type for them
                        is_true = True
                        break
                    else:
                        self.go_back()
                        return False
                else:
                    is_true = False

        return group
