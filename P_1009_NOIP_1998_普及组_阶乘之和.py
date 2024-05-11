n = int(input())
ans = 0
for i in range(1, n + 1):
    sum = 1
    for j in range(i):
        sum *= i - j
    ans += sum
print(ans)
//python 3