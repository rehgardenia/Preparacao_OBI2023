n = int(input())
quadrado = []
for i in range(n):
    linha = [int(i) for i in input().split()]
    quadrado.append(linha)
#print(quadrado)
somas = []
somaAtual = 0
for i in range(n):
    for j in range(n):
        somaAtual += quadrado[i][j]
        if(quadrado[i][j] == 0):
            x , y = i+1, j +1
    somas.append(somaAtual)
    somaAtual = 0
valor  = max(somas)- min(somas)
#print(somas)
print(valor)
print(x)
print(y)