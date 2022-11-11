n=int(input())
for i in range(n):
    k=int(input())
    s=str(input())
    a=[]
    st1=""
    for j in range(k):
        st=""
        st1=st1+s[j]
        st=st+st1+st1[::-1]
        a.append(st)
    a.sort()
    print(a[0])