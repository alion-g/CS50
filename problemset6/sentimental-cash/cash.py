while True:
    change = float(input("Change owed: "))
    if change > 0:
        break

total = change * 100
count= 0

for x in [25, 10, 5, 1]:
    while total >= x:
        total -= x
        count += 1

print(f"{count}")