#!/usr/bin/env python3

# Turn DosBox debugger MEMDUMP.TXT into a binary file.

import sys

def dump_to_bin(input_file):
    output_file = input_file + ".bin"

    with open(input_file, "r") as f_in, open(output_file, "wb") as f_out:
        for line in f_in:
            line = line.strip()
            if line:
                hex_data = line[11:].replace(" ", "")
                byte_data = bytearray.fromhex(hex_data)
                f_out.write(byte_data)

    print(f"Binary file '{output_file}' generated.")

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: python dump2bin.py memdump.txt")
    else:
        input_file = sys.argv[1]
        dump_to_bin(input_file)
