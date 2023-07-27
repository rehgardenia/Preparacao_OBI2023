# python3
# OBI2019
# Calçada Imperial

v = []
N = int(input())
for i in range(N):
    v.append(int(input()))

resp = 1
a = b = 0
seq = 0
for i in range(N):
    for j in range(i+1,N):
        a = v[i]
        b = v[j]
        if(a != b): 
            seq = 2
            for x in range(j+1,N):
              if(a == v[x]):
                seq += 1
                temp = a
                a = b 
                b = temp
        
        resp = max(resp,seq)
        
print(resp)
