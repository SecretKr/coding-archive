#include<bits/stdc++.h>
using namespace std;
int tx[] = {0,1,0,-1};
int ty[] = {1,0,-1,0};
int i,j,n,m,sx,sy,ex,ey,a[150][150];
bool wall[150][150],visit[150][150];
struct no{
    int x,y;
};
queue <no> A;

bool check(int x,int y){
    if(x >= 0 && y >= 0 && x < m && y < n) return 1;
    return 0;
}
int main()
{
    cin >> n >> m;
    cin >> sy >> sx;
    cin >> ey >> ex;
    for(i = 0;i < n;i++){
        for(j = 0;j < m;j++){
            cin >> wall[j][i];
        }
    }
    sx--; sy--; ex--; ey--;
    A.push({sx,sy});
    a[sx][sy] = 1;
    while(!A.empty()){
        no t = A.front(); A.pop();
        visit[t.x][t.y] = 1;
        for(i = 0;i < 4;i++){
            int X = t.x+tx[i],Y = t.y+ty[i];
            if(check(X,Y) && wall[X][Y] && !visit[X][Y]){
                a[X][Y] = a[t.x][t.y];
                A.push({X,Y});
            }
        }
    }
    A.push({ex,ey});
    a[ex][ey] = 2;
    while(!A.empty()){
        no t = A.front(); A.pop();
        visit[t.x][t.y] = 1;
        for(i = 0;i < 4;i++){
            int X = t.x+tx[i],Y = t.y+ty[i];
            if(check(X,Y) && wall[X][Y] && !visit[X][Y]){
                a[X][Y] = a[t.x][t.y];
                A.push({X,Y});
            }
            if(check(X,Y) && !wall[X][Y] && !visit[X][Y]){
                a[X][Y] = 3;
            }
        }
    }
    int count = 0;
    for(i = 0;i < n;i++){
        for(j = 0;j < m;j++){
            if(a[j][i] == 3){
                bool t1 = false,t2 = false;
                for(int k = 0;k < 4;k++){
                    int X = j+tx[k],Y = i+ty[k];
                    if(check(X,Y) && a[X][Y] == 1) t1 = true;
                    if(check(X,Y) && a[X][Y] == 2) t2 = true;
                }
                if(t1 && t2){
                    count++;
                    wall[j][i] = 1;
                }
            }
        }
    }
    for(i = 0;i < n;i++){
        for(j = 0;j < m;j++){
            visit[j][i] = 0;
            a[j][i] = 0;
        }
    }
    A.push({sx,sy});
    a[sx][sy] = 1;
    while(!A.empty()){
        no t = A.front(); A.pop();
        if(t.x == ex && t.y == ey){
            cout << count << endl << a[t.x][t.y];
            break;
        }
        visit[t.x][t.y] = 1;
        for(i = 0;i < 4;i++){
            int X = t.x+tx[i],Y = t.y+ty[i];
            if(check(X,Y) && wall[X][Y] && !visit[X][Y]){
                a[X][Y] = a[t.x][t.y]+1;
                A.push({X,Y});
            }
        }
    }
}
