import csv
import re
from sys import argv, exit


if len(argv) != 3:
    print("Usage: python dna.py data.csv sequence.txt")
    exit(1)

with open(argv[1], newline="") as file:
    reader = csv.reader(file, delimiter=",")
    for i, row in enumerate(reader):
        if i == 0:
            with open(argv[2], "r") as txtf:
                line = next(txtf)
                longes = []
                for i in range(1, len(row)):
                    pat = row[i]
                    matches = (
                        match[0] for match in re.finditer(fr"(?:{pat})+", line)
                    )
                    try:
                        longer = int(len(max(matches, key=len)) / len(pat))
                        longes.append(longer)
                    except:
                        longes.append(0)
        else:
            database_strs = list(map(int, row[1:]))
            if database_strs == longes:
                print(row[0])
                break
    else:
        print("No match")