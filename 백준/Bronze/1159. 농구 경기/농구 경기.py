n = int(input())

player_list = []

for i in range(n) :
    player = input()
    player_list.append(player[0])

first_name = set(player_list)
result = []
for i in first_name :
    if player_list.count(i) >= 5 :
        result.append(i)

if(len(result) > 0) :
    print(''.join(sorted(result)))
else :
    print("PREDAJA")