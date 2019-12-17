import platform
import os


class Error:
    def __init__(self, error, message):
        self.error = error
        self.message = message

    def __str__(self):
        red = "\033[91m"
        white = "\033[0m"
        bold = "\033[1m"
        return f"{red}{bold}{self.error}: {self.message}{white}"


class Logger:
    def __init__(self, global_obj):
        self.exception = []
        self.log = []
        self.global_obj = global_obj

    def add_point(self, filename, original_text, column=-1):
        log = Log(
            filename, self.global_obj["POS"] if column == -1 else column, original_text
        )
        self.log.append(log)
        return log

    def throw(self, error, no_arrow=False):
        print(self)
        if not no_arrow:
            print("^".rjust(self.log[-1].column + 2))
        print(error)
        quit()

    def __str__(self):
        return "\n".join(map(str, self.log))


class Log:
    def __init__(self, filename, column, original_text):
        self.filename = filename
        self.column = 1
        self.line = 1
        self.line_string = ""
        column += 1 if column == 0 else 0

        for pos, char in enumerate(original_text):
            if char == "\n":
                self.line += 1
                self.column = 1
            if pos + 1 == column:
                self.line_string = original_text.split("\n")[self.line - 1]
                break
            pos += 1
            self.column += 1

    def __str__(self):
        if platform.system() == "Windows":
            os.system("color")
        red = "\033[91m"
        white = "\033[0m"
        return f"{red}In {self.filename} line {self.line} col {self.column};{white}\n  {self.line_string}"


if __name__ == "__main__":
    test = Logger({})
    test.add_point("no.py", "print(hi);\nok;", column=11)
    test.add_point("no.py", "print(hi);\nok;", column=11)
    test.throw(Error("TestError", "You have been tested"))
