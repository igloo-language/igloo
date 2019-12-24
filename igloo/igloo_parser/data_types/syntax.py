class SyntaxTemplate:
    def __init__(self, name, syntax_type, grammars, pos):
        self.name = name
        self.syntax_type = syntax_type
        self.functions = functions
        self.grammars = grammars


class SyntaxObjectAST:
    def __init__(
        self, name, syntax_type, syntax_template, matching_grammar_obj, ast, pos
    ):
        self.name = name
        self.syntax_type = syntax_type
        self.syntax_template = syntax_template
        self.matching_grammar_obj = matching_grammar_obj
        self.ast = ast

    def run(self, local_objects, global_obj):
        pass


class Grammar:
    def __init__(self, rule):
        pass


class ExpressionSyntax:
    pass


class StatementSyntax:
    pass
