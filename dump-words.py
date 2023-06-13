#!/usr/bin/env python3

import sys

def print_words(file_path):
    try:
        idx = 0
        with open(file_path, "rb") as file:
            while True:
                byte1 = file.read(1)
                byte2 = file.read(1)
                if not byte1 or not byte2:
                    break
                value = ord(byte1) + 256 * ord(byte2)
                print("0x%s,  /* 0x%s */" % (hex(value)[2:].zfill(4), hex(idx)[2:].zfill(8)))
                idx += 2
    except IOError:
        print(f"Error: Unable to open file '{file_path}'")

if len(sys.argv) != 2:
    print("Usage: python program.py <file_path>")
else:
    file_path = sys.argv[1]
    print_words(file_path)

