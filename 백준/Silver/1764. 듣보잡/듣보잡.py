n, m = map(int, input().split())

nosee = set()
nohear = set()

for i in range(n) :
    nosee.add(input())
for j in range(m) :
    nohear.add(input())
    
result = sorted(list(nosee & nohear))
print(len(result))
for i in result :
    print(i)