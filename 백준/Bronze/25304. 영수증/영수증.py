total = int(input())
n = int(input())

sum = 0
for i in range(n) :
    fee, cnt = map(int, input().split())
    sum += cnt * fee

if(sum == total) :
    print("Yes")
else :
    print("No")