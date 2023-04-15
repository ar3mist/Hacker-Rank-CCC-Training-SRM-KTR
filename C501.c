n = int(input())
a = list(map(int, input().split()))

# Check for increasing sequence
i = 1
while i < n and a[i] > a[i-1]:
    i += 1

# Check for constant sequence
while i < n and a[i] == a[i-1]:
    i += 1

# Check for decreasing sequence
while i < n and a[i] < a[i-1]:
    i += 1

# Output result
if i == n:
    print("yes")
else:
    print("no")