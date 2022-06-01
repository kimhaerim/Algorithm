n,m = map(int, input().split())


str_set = set()
check = set()
result = set()
cnt = 0
for i in range(n) :
    str_set.add(input())

for i in range(n, m + n) :
    temp = input()
    if temp in str_set :
        cnt+=1

print(cnt)