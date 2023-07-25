#variaveis
seq = []
res = 1
#entrada
n = int(input()) 
for i in range (n):
   seq.append(int(input()))
# verificar se o anterior é diferente do atual
for i in range(1,n,1):
    if(seq[i]!= seq[i-1]):
       res+=1
#imprimir qtd de valores marcados       
print(res)