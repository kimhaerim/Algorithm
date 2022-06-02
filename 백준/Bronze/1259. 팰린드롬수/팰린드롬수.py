while(1) :
    str = input()
    if(str == '0') :
        break;
    if(str[0] == '0') :
        str = str[1:]
    temp = list(str)
    temp = reversed(temp)
    temp = ''.join(temp)
    if(str == temp) :
        print("yes")
    else :
        print("no")