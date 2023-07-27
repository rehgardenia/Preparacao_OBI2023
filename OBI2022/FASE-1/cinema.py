def main():
    idade1 = int(input()) # var i;  scanf("%d","i");
    idade2 = int(input())   
    x = [idade1,idade2]
    preco = 0
    for i in range(len(x)):
        if(x[i] < 18 ):
            preco += 15
        elif (x[i] < 60):
           preco += 30
        else:
           preco += 20 
    print(preco)

if __name__ == "__main__":
    main()