N = 3
idades =[]
camila = 0
for i in range(N):
    idades.append(int(input()))
idades.remove(max(idades))
print( max(idades))
