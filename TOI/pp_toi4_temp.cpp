#include<bits/stdc++.h>
using namespace std;
int tx[] = {0,1,0,-1};
int ty[] = {1,0,-1,0};
int m,t;
int a[25][25];

bool check(int x,int y){
    if(x >= 0 && y >= 0 && x < m && y < m) return 1;
    return 0;
}

struct s{
    int x,y;
};

queue <s> q;

int main()
{
    int x,y;
    cin >> m >> x >> y;
    int i,j;
    for(i = 0;i < m;i++){
        for(j = 0;j < m;j++){
            cin >> a[i][j];
        }
    }
    t = a[y-1][x-1];
    q.push({x-1,y-1});
    while(!q.empty()){
        s te = q.front(); q.pop();
        for(i = 0;i < 4;i++){
            int X = te.x+tx[i], Y = te.y+ty[i];
            if(check(X,Y) && a[Y][X] > a[te.y][te.x] && a[Y][X] != 100){
                t = max(t,a[Y][X]);
                q.push({X,Y});
            }
        }
    }
    cout << t;
}
