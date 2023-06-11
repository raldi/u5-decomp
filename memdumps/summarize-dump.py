#! /usr/bin/env python

import os
import sys

def read_binary_files(file_paths):
  files_data = {}
  for file_path in file_paths:
    with open(file_path, 'rb') as file:
      files_data[file_path] = file.read()
  return files_data

class Section:
  def __init__(self, label, start, length):
    self.label = label
    self.start = start
    self.length = length

def summarize(dump_data, files_data):
  summary = []
  offset = 0
  while offset < len(dump_data):
    for file_name, file_data in files_data.items():
      if not dump_data.startswith(file_data, offset):
        continue
      short_name = file_name.split("/")[-1]
      length = len(file_data)
      summary.append(Section(short_name, offset, length))
      offset += length
      break
    else:
      if summary and summary[-1].label == "Unknown":
        summary[-1].length += 1
      else:
        summary.append(Section("Unknown", offset, 1))
      offset += 1

  num_trailing_zeroes = len(dump_data) - len(dump_data.rstrip(b'\x00'))

  if num_trailing_zeroes and summary[-1].label == "Unknown":
    summary[-1].length -= num_trailing_zeroes
    summary.append(Section("Zeroes", summary[-1].start + summary[-1].length, num_trailing_zeroes))

  return summary


def main():
  others = []
  dumps = []

  for arg in sys.argv[1:]:
    if arg.endswith(".dump"):
      dumps.append(arg)
    else:
      others.append(arg)

  assert len(others) >= 1
  assert len(dumps) == 1

  files_data = read_binary_files(others + dumps)

  dump = dumps[0]
  dump_data = files_data.pop(dump)
  summary = summarize(dump_data, files_data)

  for section in summary:
    print(f"{section.start:04x}-{section.start+section.length:04x} ({section.length:04x}): {section.label}")

if __name__ == '__main__':
  main()
