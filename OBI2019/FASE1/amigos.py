
#entrada
n = int(input())
a = [int(i) for i in input().split()]
#caluular a distancia
maior = 0 
resp = 0
for i in range(1,n):
   dist = a[i] + a[maior] +(i-maior)
   resp = max(resp,dist)
   if(a[i]> a[maior] +(i-maior)):  
       maior = i

print(resp)   