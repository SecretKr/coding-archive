from random import randint

n = 100
m = 20
mi = 5
ma = 15
f = open("3.in","w")

print(n,m)
s = str(n) + " " + str(m)
f.write(s)
f.write("\n")
for i in range (n):
    t = randint(mi,ma)
    if i < 10:
        print(t)
    f.write(str(t))
    f.write("\n")

f.close()