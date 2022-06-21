from collections import Counter
n = int(input())
arr = []

for i in range(n) :
    arr.append(int(input()))

arr.sort()
num = Counter(arr).most_common(2)
print(round(sum(arr) / n))
print(arr[int(n//2)])

if(len(num) > 1) :
    if(num[0][1] == num[1][1]) :
        print(num[1][0])
    else :
        print(num[0][0])
else :
    print(num[0][0])

print(max(arr) - min(arr))