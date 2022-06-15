str = input()

for i in range(len(str)) :
    if(str[i] >= 'A' and str[i] <= 'Z') :
        print(str[i].lower(), end="")
    else :
        print(str[i].upper(), end="")