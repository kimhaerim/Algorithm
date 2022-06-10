t = int(input())

def check(bmi, weight, height) :
    if(height < 140.1) :
        return 6
    elif(height < 146) :
        return 5
    elif(height < 159) :
        return 4
    elif(height < 161) :
        if(bmi >= 16 and bmi < 35) :
            return 3
        elif(bmi < 16 or bmi >= 35) :
            return 4
    elif(height >= 204) :
        return 4
    else :
        if (bmi >= 20 and bmi < 25) :
            return 1
        elif ((bmi >= 18.5 and bmi < 20) or (bmi >= 25 and bmi < 30)):
            return 2
        elif ((bmi >= 16 and bmi < 18.5) or (bmi >= 30 and bmi < 35)):
            return 3
        else :
            return 4

while(t > 0) :
    t -=1
    height, weight = map(int, input().split())
    bmi = weight/((height / 100) **2)
    # print(bmi)
    print(check(bmi, weight, height))

