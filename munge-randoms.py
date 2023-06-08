#!/usr/bin/env python

import re
import sys


def munge_randoms(c_code):
  pattern = r'func_0x00009ec2\([^)]+\)'

  randoms = re.findall(pattern, c_code)
  nonrandoms = re.split(pattern, c_code)

  assert len(randoms) == len(nonrandoms) - 1

  rv = nonrandoms.pop(0)

  for random, nonrandom in zip(randoms, nonrandoms):
    args = random.split("(")[1].split(")")[0]
    tokens = args.split(",")
    if len(tokens) == 1:
      die = tokens[0]
      b = '???'
    else:
      die, b = tokens
    die = die.strip()
    b = b.strip()
    if b == '0':
      b = "false"
    elif b == '1':
      b = "true"
    if die.startswith("0x"):
      try:
        die = str(int(die[2:], 16))
      except TypeError:
        print(f"Can't convert {die}")
      
    rv += "RANDOM(" + die + ", " + b + ")"
    rv += nonrandom

  return rv


if __name__ == "__main__":
  if len(sys.argv) < 2:
    raise ValueError("Need one or more filenames")

  for filename in sys.argv[1:]:
    with open(filename, 'r') as file:
      old_c_code = file.read()
    new_c_code = munge_randoms(old_c_code)
    with open(filename, 'w') as fd:
      fd.write(new_c_code)
