#include<bits/stdc++.h>
using namespace std;
int tx[] = {0,1,0,-1};
int ty[] = {1,0,-1,0};
int m[25][25];
int c[25][25][20];
int p[25][25][2];
int N,P,K;

struct s{
    int x,y,k;
};

queue <s> q;

int check(int x,int y){
    if(x < N && y < N && x >= 0 && y >= 0) return 1;
    return 0;
}

int main()
{
    cin >> N >> P >> K;
    int i,j;
    for(i = 0;i < N;i++) for(j = 0;j < N;j++){scanf("%d",&m[j][i]); for(int o = 0;o <= P;o++) c[j][i][o] = 1e9;}
    for(int o = 0;o <= P;o++) c[0][0][o] = 0;
    int pa,pb,pc,pd;
    for(i = 0;i < P;i++){
        scanf("%d%d%d%d",&pa,&pb,&pc,&pd);
        p[pb][pa][0] = pd;
        p[pb][pa][1] = pc;
    }


    q.push({0,0,K});
    while(!q.empty()){
        s t = q.front(); q.pop();
        for(i = 0;i < 4;i++){
            int X = t.x + tx[i], Y = t.y + ty[i];
            if(check(X,Y) && c[t.x][t.y][t.k] + m[X][Y] < c[X][Y][t.k]){
                c[X][Y][t.k] = c[t.x][t.y][t.k] + m[X][Y];
                q.push({X,Y,t.k});
            }
        }
        if(t.k) if((p[t.x][t.y][0]  || p[t.x][t.y][1]) && c[t.x][t.y][t.k] < c[p[t.x][t.y][0]][p[t.x][t.y][1]][t.k-1]){
            c[p[t.x][t.y][0]][p[t.x][t.y][1]][t.k-1] = c[t.x][t.y][t.k];
            q.push({p[t.x][t.y][0],p[t.x][t.y][1],t.k-1});
        }
    }
    /*for(i = 0;i < N;i++){
        for(j = 0;j < N;j++){
            printf("%3d",c[j][i][0]);
        }
        cout << endl;
    }*/
    

    int mi = 1e9;
    for(i = 0;i <= P;i++){
        mi = min(mi,c[N-1][N-1][i]);
    }
    cout << mi;
    //cout << c[N-1][N-1];
}