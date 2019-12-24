import os
import platform


class BackTracker:
    def __init__(self, global_obj):
        self.logs = {}
        self.logger = global_obj.error
        self.global_obj = global_obj
        self.error = ""

    def add_point(self, location, message, token, length):
        self.logs[ParseErrorTrack(location, message, token)] = length

    def get_max_parses(self):
        if self.logs:
            values = self.logs.values()
            max_values = [
                key for m in [max(values)] for key, val in self.logs.items() if val == m
            ]

            locations = [value.location for value in max_values]
            dictionary = dict(zip(max_values, locations))
            final_max_values = [
                key
                for m in [max(locations)]
                for key, val in dictionary.items()
                if val == m
            ]

            return final_max_values
        else:
            raise Exception("Something went wrong")

    def clear(self):
        self.logs.clear()

    def throw(self):
        self.logger.add_point(
            self.global_obj.filename,
            self.global_obj.contents,
            self.get_max_parses()[0].location,
        )
        self.logger.throw(self)

    def __str__(self):
        max_values = self.get_max_parses()
        if platform.system() == "Windows":
            os.system("color")
        red = "\033[91m"
        white = "\033[0m"
        bold = "\033[1m"

        self.error = f'{red}{bold}SyntaxError: {" or ".join(list(set(map(lambda x: x.message, max_values)))).capitalize()} found `{max_values[0].token.value}`{white}'
        return self.error


class ParseErrorTrack:
    def __init__(self, location, message, token):
        self.location = location
        self.message = message
        self.token = token
