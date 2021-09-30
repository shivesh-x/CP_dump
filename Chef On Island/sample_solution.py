import math
n=int(input())
for i in range(n):
    l=[]
    a=list(map(int,input().split()))
    b=a[0]/a[-3]
    c=a[1]/a[-2]
    #print(b)
    #print(c)
    l.append(b)
    l.append(c)
    d=min(l)
    if a[-1]<=d:
        print("Yes")
    else:
        print("No")
