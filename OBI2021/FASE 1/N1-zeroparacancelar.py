n = int(input())
seq =[]
x = 0
for i in range(n):
    x = int(input())
    if(x != 0):
        seq.append(x)
    else:
        seq.pop(-1)

print(sum(seq))