n = int(input())
arr = []
for i in range(n) :
    x,y = map(int, input().split())
    arr.append([y, x])
# y로 정렬 후 x로 정렬하기 때문에 y,x 순서로 append

result = sorted(arr)
for y, x in result :
    print(x,y)