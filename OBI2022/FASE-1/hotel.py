#desconto- tem chegar a partir do dia 1 de julho e sair no dia 1 de agosto
d = int(input()) # diaria no dia 1
a = int(input()) # do dia 2 ate 15
n = int(input())
dias = (31+1) - n
if (n > 15):
    n = 15
diaria =  dias * (d + (n-1) * a)  
print(diaria)