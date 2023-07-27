
def molha(lin, col):
    parede[lin][col] = "o"
    if lin ==  N -1 : return  
    #  se a linha de baixo for . molha
    if parede[lin+1][col] == ".": molha(lin+1,col)
	#se a linha de baixo for # espalha
    if parede[lin+1][col] == "#": 
        if parede[lin][col-1] == ".": molha(lin,col-1)
        if parede[lin][col+1] == ".": molha(lin,col+1)
	


N, M = [int(i) for i in input().split()]
parede = []
for i in range(N): 
    parede.append(list(input()))
#print(parede)

molha(0,parede[0].index("o"))

for i in range(N):
        print("".join(parede[i]))