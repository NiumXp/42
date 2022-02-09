import os
import time
import difflib
import argparse
import subprocess

parser = argparse.ArgumentParser()
parser.add_argument("-p", type=str, help="Path to file")
parser.add_argument("-s", type=str, help="Source name")
parser.add_argument("-o", type=str, help="Output name")

args = parser.parse_args()

PATH = args.p
SOURCE = args.s
OUTPUT = args.o

BASE_DIR = os.path.abspath(__file__)
BASE_DIR, _ = os.path.split(BASE_DIR)

SIMPLE_CODE = """
int main(void)
{
    return (0);
}
"""

src = open(f"./sources/{SOURCE}.c").read() if SOURCE else ''

with open(f"./{PATH}") as file:
    raw = file.read()

with open(f"./{PATH}", 'a') as file:
    if SOURCE:
        file.write(src)
    else:
        file.write(SIMPLE_CODE)

subprocess.Popen(["gcc", "-Wall", "-Werror", "-Wextra", f"./{PATH}", "-o", "r"])
time.sleep(1)  # wait gcc execution
out = subprocess.Popen(
    [f"{BASE_DIR}/r"], stdout=subprocess.PIPE,
).stdout.read().decode()
# out = "aa"

if SOURCE:
    with open(f"./{PATH}", 'w') as file:
        file.write(raw)

if OUTPUT:
    data = open(f"./outputs/{OUTPUT}").read()

    diff = difflib.context_diff(data, out)
    print('\n'.join(diff))

print("\nOUTPUT", '-'*15)
print(out, end='')
