# n filas e m assentos
a,n, m = [int(i) for i in input().split()]

m_fila = n+1
livre = 0
assentos = []

for i in range(n):
    fila = [int(i) for i in input().split()]
    assentos.append(fila)
assentos.reverse()
#print(assentos)
for i in range(n):
    for j in range(m):
        if(assentos[i][j] == 0):
            livre+=1
            if livre >= a and i < m_fila:
                m_fila = i +1
                break
        else:
            livre = 0 # zera pq nao é seguido
    livre = 0 # zera pq terminou a fila


if m_fila == n+1:
    print(-1) # quer dizer que não mudou , não tem assento para todos
else:
    print(m_fila)
