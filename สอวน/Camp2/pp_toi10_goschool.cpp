#include<bits/stdc++.h>
using namespace std;
int O,m,n;
bool wall[55][55];
long long mem[55][55];

long long fn(int x,int y)
{
    if(mem[x][y]) return mem[x][y];
    if(x > m || y > n) return mem[x][y] = 0;
    if(x == m && y == n) return mem[x][y] = 1;
    if(wall[x][y]) return mem[x][y] = 0;
    return mem[x][y] = fn(x+1,y) + fn(x,y+1);
}

int main()
{
    cin >> m >> n >> O;
    int i,x,y;
    for(i = 0;i < O;i++){
        scanf("%d%d",&x,&y);
        wall[x][y] = 1;
    }
    cout << fn(1,1);
}
