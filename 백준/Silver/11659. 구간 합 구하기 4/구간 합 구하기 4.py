n,m = map(int, input().split())

arr = list(map(int, input().split()))
result = [0]

sum = 0
for i in range(n) :
    sum += arr[i]
    result.append(sum)

for _ in range(m):
    i, j = map(int, input().split())
    print(result[j] - result[i-1])