n = int(input())
count = 0
for b in range(2, n+1):
    if (n % (b-1)) == 0:
        count += 1
print(count)