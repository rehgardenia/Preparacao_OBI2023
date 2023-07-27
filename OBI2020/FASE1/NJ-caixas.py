# escreva seu programa aqui
a = int(input())
b = int(input())
c = int(input())

if(a == b and b == c):
    print(3)
elif( a< b and b <c):
    print(1)
elif(a== b and a+b < c):
    print(1)
else:
    print(2)