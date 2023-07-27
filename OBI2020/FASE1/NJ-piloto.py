# entrada das posiçoês
a = int(input())
b = int(input())
c = int(input())
# calculo das distancias
distAB = b-a
distBC = c-b 
#  verficando e imprimindo
if(distAB > distBC):
    print(-1)
elif(distAB < distBC):
    print(1)
elif(distAB == distBC):
    print(0)
else:
    print('!!')