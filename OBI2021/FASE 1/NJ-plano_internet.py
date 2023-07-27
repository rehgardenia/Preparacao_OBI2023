X = int(input())
N = int(input())

x_gasto = []
for i in range(N):
    x_gasto.append(int(input()))
valor = 0
for i in range(N):
    valor += X - x_gasto[i]
print(valor+X)