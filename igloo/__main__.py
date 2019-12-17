import errors
import igloo_interpreter
import os
import argparse


def run_program(filename, text, verbose=False):
    program = igloo_interpreter.Program(filename, text, verbose=verbose)
    program.run(program.ast.statements)


def read_file(filename, verbose=False):
    abs_path = os.path.abspath(filename)
    with open(abs_path, "r") as file:
        text = file.read()
    run_program(filename, text, verbose=verbose)


# Instantiate the parser
parser = argparse.ArgumentParser(description="A programming language")

parser.add_argument(
    "filename", type=str, help="Relative or absolute file path of file to run"
)

parser.add_argument("-v", "--verbose", action="store_true", help="Debug info for nerds")


args = parser.parse_args()

read_file(args.filename, verbose=args.verbose)
