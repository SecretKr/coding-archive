#include<bits/stdc++.h>
using namespace std;
int V,e,X,Y,a,b;
int mem[100001][3][2];
int htg[10001];

struct s{
    int x,y,t;
    bool eo;
    bool operator < (s aa) const{
        return aa.t < t;
    }
};
struct ss{
    int y,t;
};
stack <int> l;

int data[1001][1001];

priority_queue <s> ve;
vector <ss> v[1000001];

int main()
{
    int i,j;
    cin >> Y >> e;
    for(i = 0;i < e;i++){
        cin >> j >> a >> b;
        data[j][a] = i;
        data[a][j] = i;
        v[j].push_back({a,b});
        v[a].push_back({j,b});
    }
    for(i = 0;i < v[1].size();i++){
        ve.push({1,v[1][i].y,v[1][i].t,1});
    }
    for(i = 2;i <= Y;i++){
        mem[i][0][0] = mem[i][1][0] = 1e9;
    }
    while(!ve.empty()){
        s te = ve.top(); ve.pop();
        if(mem[te.y][(te.eo+1)%2][0] > mem[te.x][te.eo][0]+te.t){
            mem[te.y][(te.eo+1)%2][0] = mem[te.x][te.eo][0]+te.t;
            mem[te.y][(te.eo+1)%2][1] = te.x;
            for(i = 0;i < v[te.y].size();i++){
                ve.push({te.y,v[te.y][i].y,v[te.y][i].t,(te.eo+1)%2});
            }
        }
    }

    int l = i = Y;
    j = 0;
    htg[l+1] = Y;
    while(i != 1){
        i = htg[l--] = mem[i][j++][1];
        j %= 2;
    }
    l = 1;
    for(i = l;i < e;i++){
        if(htg[i] && htg[i+1]){
            l = max(l,data[htg[i]][htg[i+1]]);
        }
    }
    cout << l+1 << " " << mem[Y][0][0];
}

