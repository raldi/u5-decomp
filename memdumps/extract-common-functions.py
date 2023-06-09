#! /usr/bin/env python

import re
import sys

rtypes = set(['void', 'int', 'uint', 'char', 'byte', 'bool',
              'undefined', 'undefined2', 'undefined4'])

def is_function_name(line):
  if line == "": return None
  if line.startswith(" "): return None
  if line.startswith("/"): return None
  if line.startswith("*/"): return None
  if line.startswith("{"): return None
  if line.startswith("}"): return None
  if line.startswith("typedef"): return None
  if line.startswith("Unable to decompile"): return None
  if line.startswith("Low-level Error"): return None
  if line.startswith("Cause"): return None
  if line.endswith(":"): return None

  # Got one. Clean it up.
  line = line.split("(")[0]
  line = line.replace(" * ", " ")
  rtype, name = line.split(" ")
  if rtype not in rtypes:
    raise ValueError("Bad rtype: " + rtype)
  if "FUN_" not in name and 'switch' not in name:
    raise ValueError(line)
  return name


def extract_chapters(filename):
  current_function = None
  current_lines = []
  chapters = []
  for line in open(filename, 'r').readlines():
    line = line.replace(' __cdecl16far ', ' ').replace(' __cdecl16near ', ' ').rstrip()
    if line == "}":
      assert current_function is not None
      current_lines.append(line)
      chapters.append((current_function, current_lines))
      current_function = None
      current_lines = []
      continue
    name = is_function_name(line)
    if name is not None:
      if current_function is not None:
        raise ValueError(f"{name} starting, but {current_function} never closed")
      current_function = name
    current_lines.append(line)
  chapters[-1][1].extend(current_lines)
  return chapters


if __name__ == '__main__':
  assert len(sys.argv) > 1

  files = dict()
  counts = dict()
  for filename in sys.argv[1:]:
    chapters = extract_chapters(filename)
    files[filename] = chapters
    for func, lines in chapters:
      if func not in counts:
        counts[func] = 0
      counts[func] += 1

  commons = dict()

  for filename, chapters in files.items():
    with open(filename, 'w') as fd:
      for func, lines in chapters:
        if counts[func] == 1:
          for line in lines:
            fd.write(line + "\n")
        elif func not in commons:
          commons[func] = lines
        elif False: # Too many superficial differences
          num = max(len(commons[func]), len(lines))
          for i in range(num):
            if i >= len(commons[func]):
              c = "(none)"
            else:
              c = commons[func][i] + '$'
            if i >= len(lines):
              l = "(none)"
            else:
              l = lines[i] + '$'
            if c != l:
              print(f"{func} had this on line {i}:\n{c}")
              print(f"...but this in {filename}:\n{l}")
              sys.exit(1)

  with open('commons.c', 'w') as fd:
    for func, lines in commons.items():
      for line in lines:
        fd.write(line + "\n")

