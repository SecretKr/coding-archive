#include<bits/stdc++.h>
using namespace std;
int tx[] = {0,1,0,-1};
int ty[] = {1,0,-1,0};
int i,j,n,m,sx,sy,ex,ey,a[155][155];
bool wall[155][155],visit[155][155];
bool bom[155][155];
struct no{
    int x,y;
};
queue <no> A;

bool check(int x,int y){
    if(x >= 1 && y >= 1 && x <= n && y <= m) return 1;
    return 0;
}

int main()
{
    cin >> m >> n;
    cin >> sy >> sx;
    cin >> ey >> ex;
    for(i = 1;i <= m;i++){
        for(j = 1;j <= n;j++){
            scanf("%d",&wall[j][i]);
        }
    }
    A.push({sx,sy});
    a[sx][sy] = 1;
    while(!A.empty()){
        no t = A.front(); A.pop();
        visit[t.x][t.y] = 1;
        for(i = 0;i < 4;i++){
            int X = t.x+tx[i],Y = t.y+ty[i];
            if(check(X,Y) && !wall[X][Y]) {
                if(!a[X][Y]) a[X][Y] = -a[t.x][t.y]-1;
                else a[X][Y] = max(a[X][Y],-a[t.x][t.y]-1);
                bom[X][Y] = 1;
            }
            if(check(X,Y) && wall[X][Y] && !visit[X][Y]){
                a[X][Y] = a[t.x][t.y]+1;
                A.push({X,Y});
            }
        }
    }
    int co = 0;
    int ans = -1e9;
    A.push({ex,ey});
    a[ex][ey] = 1;
    while(!A.empty()){
        no t = A.front(); A.pop();
        visit[t.x][t.y] = 1;
        for(i = 0;i < 4;i++){
            int X = t.x+tx[i],Y = t.y+ty[i];
            if(check(X,Y) && !wall[X][Y] && bom[X][Y] && !visit[X][Y]){
                visit[X][Y] = 1;
                co++;
                ans = max(ans,a[X][Y]-a[t.x][t.y]);
            }
            if(check(X,Y) && wall[X][Y] && !visit[X][Y]){
                a[X][Y] = a[t.x][t.y]+1;
                A.push({X,Y});
            }
        }
    }

    cout << co << endl << -ans;
}
