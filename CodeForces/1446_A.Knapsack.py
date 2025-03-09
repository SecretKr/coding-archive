t = input()
for T in range (0,t):
    n,W = input().split()
    s = 0
    m = 0
    for i in range (0,n):
        w = input()
        if w <= W && w >= W/2:
            print("1\n",i+1,"\n")
            f = 0
            for j in range(0,i):
                b[j] = 0
            i++
            while i < n:
                w = input()