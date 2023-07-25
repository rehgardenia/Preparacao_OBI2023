#entrada
m = int(input())
a = int(input())
b = int(input())
#descubri a idade do outro filho
c = m - (a+b)
#imprimir o filho mais velho
print(max(a,b,c))