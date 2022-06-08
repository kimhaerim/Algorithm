chr = input()

l = len(chr)
start = 0
while(l > 0) :
    print(chr[start:start+10])
    start+=10
    l -= 10