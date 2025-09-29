n = int(input())

vals = []
while n != 1:
    vals.append(n)
    if n % 2 == 0:
        n //= 2
    else:
        n = n * 3 + 1

vals.append(1)

for val in vals:
    print(val, end=" ")
print()
