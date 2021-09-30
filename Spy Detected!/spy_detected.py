z=[int('0') for i in range(200)]
t=int(input())
for ee in( range(t)):
    n=int(input())
    s=0
    j=0
    z=[int(i) for i in (input().split())]
    for i in(range(2,n)):
        if z[i]!=z[i-1]:
            if z[i]!=z[i-2]:
                print(i+1)
            else:
                print(i)
            break
        elif z[0]!=z[1]:
            print(1)
            break
        
