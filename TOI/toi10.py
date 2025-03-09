def f(x, y):
  if x > m or y > n: return 0
  if mem[x][y] == -1: return 0
  if x == m and y == n: return 1
  if mem[x][y]: return mem[x][y]
  mem[x][y] = f(x+1,y) + f(x,y+1)
  return mem[x][y]
  
mem = [[0]*55 for _ in range(55)]
numbers = list(map(int, input().split()))
m = numbers[0]
n = numbers[1]
O = int(input())
for i in range(O):
  num = list(map(int, input().split()))
  mem[num[0]][num[1]] = -1

print(f(1,1))