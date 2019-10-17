def variable_assignment(self, statement):
    self.objects[self.eval_id_name(statement.id)] = self.eval_expression(
        statement.value
    )
