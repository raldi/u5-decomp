#!/usr/bin/env python

import re
import sys

def annotate(i):
  if i < 0: i += 0x10000

  if 0x3000 <= i <= 0x4fff:
    label = 'DATA_OVL'
    i += 0x10
  elif 0xb000 <= i <= 0xbfff: # -0x4000 block
    label = 'DATA_OVL'
    i -= 0x10000
    i += 0x5b36
  elif 0x55a6 <= i <= 0x6600:
    label = 'SAVED_GAM'
    i -= 0x55a6
  else:
    label = 'MEM'

  if i < 0:
    i = -i
    sign = '-'
  else:
    sign = ''
  return '%s(%s0x%0.4x)' % (label, sign, i)


def annotate_memory_references(c_code):
  pattern = r'(?:\b|-)?0x[0-9a-fA-F]{3,4}\b'

  addrs = re.findall(pattern, c_code)
  nonaddrs = re.split(pattern, c_code)

  assert len(addrs) == len(nonaddrs) - 1

  rv = nonaddrs.pop(0)

  for addr, nonaddr in zip(addrs, nonaddrs):
    i = int(addr, 16)
    replacement_string = annotate(i)
    rv += replacement_string
    rv += nonaddr

  return rv


if __name__ == "__main__":
  if len(sys.argv) < 2:
    raise ValueError("Need one or more filenames")

  for filename in sys.argv[1:]:
    with open(filename, 'r') as file:
      old_c_code = file.read()
    new_c_code = annotate_memory_references(old_c_code)
    with open(filename, 'w') as fd:
      fd.write(new_c_code)
