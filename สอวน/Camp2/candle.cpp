#include<bits/stdc++.h>
using namespace std;
int n,m,c;
bool wall[2005][2005];
int tx[] = {0,1,1,1,0,-1,-1,-1};
int ty[] = {1,1,0,-1,-1,-1,0,1};
char in[2005];

bool check(int x,int y){
    if(x >= 0 && y >= 0 && x < m && y < n) return 1;
    return 0;
}

struct s{
    int x,y;
};

queue <s> q;

int main()
{
    int i,j;
    cin >> n >> m;
    for(i = 0;i < n;i++){
        scanf("%s",in);
        for(j = 0;j < m;j++){
            if(in[j] == '1') wall[j][i] = 1;
            else wall[j][i] = 0;

        }
    }
    for(i = 0;i < n;i++){
        for(j = 0;j < m;j++){
            if(wall[j][i]){
                q.push({j,i});
                c++;
                while(!q.empty()){
                    s T = q.front(); q.pop();
                    wall[T.x][T.y] = 0;
                    for(int k = 0;k < 8;k++){
                        int X = T.x+tx[k],Y = T.y+ty[k];
                        if(wall[X][Y] && check(X,Y)){
                            q.push({X,Y});
                        }
                    }
                }
            }
        }
    }
    cout << c;
}
