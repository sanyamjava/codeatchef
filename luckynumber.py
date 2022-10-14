u = int(input())
while(u>0):
    l = list(map(int, input().split()))
    a = l[0]
    b = l[1]
    c = l[2]
    if(a==7 or b==7 or c==7):
        print("YES")
    else:
        print("NO")
    u -=1
