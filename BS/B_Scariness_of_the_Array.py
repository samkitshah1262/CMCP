n=int(input())
for i in range(n):
    b=int(input())
    #x=[]
    sam=0
    x=list(map(float,input().split()))
        #x.append(t)
    for i in x:
        sam=sam+i**b
    ans=sam**(1/b)
    print(round(ans,6))    