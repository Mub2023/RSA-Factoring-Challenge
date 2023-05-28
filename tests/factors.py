#!/usr/bin/python3
from sympy.ntheory import factorint
import sys
if len(sys.argv) != 2:
        print("Usage: factors <file>")

with open(sys.argv[1], "r") as  b:
    for line in b:
        number = int(line)
        number2 = int(line)

factors = factorint(number, number2)
print("{} = {} * {}".format(factors, number, number2))
