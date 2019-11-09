import errors
import igloo_interpreter
import os
import argparse


def run_program(filename, text):
    program = igloo_interpreter.Program(filename, text)
    program.run()


def read_file(filename):
    abs_path = os.path.abspath(filename)
    with open(abs_path, "r") as file:
        text = file.read()
    run_program(filename, text)


# Instantiate the parser
parser = argparse.ArgumentParser(description="A programming language")

parser.add_argument(
    "filename", type=str, help="Relative or absolute file path of file to run"
)

args = parser.parse_args()

read_file(args.filename)
