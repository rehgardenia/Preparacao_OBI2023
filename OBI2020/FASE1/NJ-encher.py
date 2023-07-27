#encher
n = int(input())
a = [int(i) for i in input().split()]
resp = "S"
for i in range(1,n):
    if (a[0]+ a[n-1]) != (a[i] + a[n-i-1]): 
        resp = 'N'
print(resp)

