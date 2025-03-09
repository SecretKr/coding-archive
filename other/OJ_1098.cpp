#include<bits/stdc++.h>
using namespace std;
int m,n,c;
int tx[]={1,0,-1,0};
int ty[]={0,1,0,-1};
bool v[10][10];
bool visit[10][10];
int a[5],b[5];
struct s{
    int x,y;
};
queue <s> q;

bool check(int x,int y){
    if(x >= 0 && y >= 0 && x < n && y < m) return 1;
    return 0;
}

void f(int x,int y,int t,int p){
    if(x == 1 && y == 0 && p == 3) c++;
    else if(check(x,y)){
    for(int i = 0;i <  n;i++) for(int j = 0;j < m;j++) visit[i][j] = 0;
    q.push({1,0});
    while(!q.empty()){
        s T = q.front(); q.pop();
        visit[T.x][T.y] = 1;
        if(T.x == x && T.y == y) break;
        for(int l = 0;l < 4;l++){
            int xn = T.x+tx[l],yn = T.y+ty[l];
            if(!visit[xn][yn] && !v[xn][yn]){
                q.push({xn,yn});
            }
        }
    }
        if(p == 0 && t <= m*n/4 && n*m - t >= abs(x-1)+y){
            if(t == m*n/4 && x == b[p] && y == a[p]) p++;
            if(!v[y+1][x]){
                v[y+1][x] = 1;
                f(x,y+1,t+1,p);
                v[y+1][x] = 0;
            }
            if(!v[y][x+1]){
                v[y][x+1] = 1;
                f(x+1,y,t+1,p);
                v[y][x+1] = 0;
            }
            if(!v[y-1][x]){
                v[y-1][x] = 1;
                f(x,y-1,t+1,p);
                v[y-1][x] = 0;
            }
            if(!v[y][x-1]){
                v[y][x-1] = 1;
                f(x-1,y,t+1,p);
                v[y][x-1] = 0;
            }
        }
        else if(p == 1 && t <= m*n/2 && n*m - t >= abs(x-1)+y){
            if(t == m*n/2 && x == b[p] && y == a[p]) p++;
            if(!v[y+1][x]){
                v[y+1][x] = 1;
                f(x,y+1,t+1,p);
                v[y+1][x] = 0;
            }
            if(!v[y][x+1]){
                v[y][x+1] = 1;
                f(x+1,y,t+1,p);
                v[y][x+1] = 0;
            }
            if(!v[y-1][x]){
                v[y-1][x] = 1;
                f(x,y-1,t+1,p);
                v[y-1][x] = 0;
            }
            if(!v[y][x-1]){
                v[y][x-1] = 1;
                f(x-1,y,t+1,p);
                v[y][x-1] = 0;
            }
        }
        else if(p == 2 && t <= 3*m*n/4 && n*m - t >= abs(x-1)+y){
            if(t == 3*m*n/4 && x == b[p] && y == a[p]) p++;
            if(!v[y+1][x]){
                v[y+1][x] = 1;
                f(x,y+1,t+1,p);
                v[y+1][x] = 0;
            }
            if(!v[y][x+1]){
                v[y][x+1] = 1;
                f(x+1,y,t+1,p);
                v[y][x+1] = 0;
            }
            if(!v[y-1][x]){
                v[y-1][x] = 1;
                f(x,y-1,t+1,p);
                v[y-1][x] = 0;
            }
            if(!v[y][x-1]){
                v[y][x-1] = 1;
                f(x-1,y,t+1,p);
                v[y][x-1] = 0;
            }
        }
    }
}

int main()
{
    int i,j;
    cin >> m >> n;
    for(i = 0;i < 3;i++){
        cin >> a[i] >> b[i];
    }
    c = 0;
    v[0][0] = 1;
    f(0,0,1,0);
    cout << c;
}
