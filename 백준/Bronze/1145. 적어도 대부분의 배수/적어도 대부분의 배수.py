arr = list(map(int, input().split()))
minNum = min(arr)
while(True) :
    cnt = 0
    for i in range(len(arr)) :
        if minNum % arr[i] == 0 :
            cnt+=1
    if cnt >= 3 :
        print(minNum)
        break
    minNum += 1

