#!/usr/bin/env python3

import sys

def print_bytes(file_path):
    try:
        idx = 0
        with open(file_path, "rb") as file:
            while True:
                byte = file.read(1)
                if not byte:
                    break
                value = ord(byte)
                print("0x%s,  /* 0x%s */" % (hex(value)[2:].zfill(2), hex(idx)[2:].zfill(8)))
                idx += 1
    except IOError:
        print(f"Error: Unable to open file '{file_path}'")

if len(sys.argv) != 2:
    print("Usage: python program.py <file_path>")
else:
    file_path = sys.argv[1]
    print_bytes(file_path)

