n=int(input())
for i in range(n):
    x=int(input())
    if(x==1):
        print(1)
    else:    
        y=int(bin(x).split('0b')[1])
        print(y)
        s=str(y)
        M=1000000007
        print(pow(2,len(s))%M)
