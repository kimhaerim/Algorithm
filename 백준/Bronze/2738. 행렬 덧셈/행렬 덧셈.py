
n,m = map(int, input().split())

arr1 = list()
result = list()


for i in range(n) :
    arr1.append(list(map(int, input().split())))
for i in range(n) :
    result.append(list(map(int, input().split())))

for i in range(n) :
    for j in range(m) :
        result[i][j] += arr1[i][j]

for i in range(n) :
    for j in range(m) :
        print(result[i][j], end = " ")
    print()