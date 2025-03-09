#include<bits/stdc++.h>
using namespace std;
int n,mem[10005],me2[10005],m;
struct s{
    int x,y,d;
    bool operator < (s t) const{
        return t.d < d;
    }
};
struct ss{
    int y,d;
};
priority_queue <s> pq;
vector <ss> v[10005];
int main()
{
    int x,y,z;
    scanf("%d%d%d%d%d",&n,&m,&x,&y,&z);
    int i,j,X,Y,D;
    for(i = 0;i <= n;i++){
        mem[i] = me2[i] = 1e9;
    }
    mem[x] = 0;
    for(i = 0;i < m;i++){
        scanf("%d%d%d",&X,&Y,&D);
        v[X].push_back({Y,D});
        v[Y].push_back({X,D});
    }
    for(i = 0;i < v[x].size();i++){
        pq.push({x,v[x][i].y,v[x][i].d});
    }
    while(!pq.empty()){
        s t = pq.top(); pq.pop();
        if(mem[t.y] > mem[t.x]+t.d && mem[t.x] <= z-t.d){
            mem[t.y] = mem[t.x]+t.d;
            for(i = 0;i < v[t.y].size();i++){
                pq.push({t.y,v[t.y][i].y,v[t.y][i].d});
            }
        }
    }
    me2[y] = 0;
    for(i = 0;i < v[y].size();i++){
        pq.push({y,v[y][i].y,v[y][i].d});
    }
    while(!pq.empty()){
        s t = pq.top(); pq.pop();
        if(me2[t.y] > me2[t.x]+t.d){
            me2[t.y] = me2[t.x]+t.d;
            for(i = 0;i < v[t.y].size();i++){
                pq.push({t.y,v[t.y][i].y,v[t.y][i].d});
            }
        }
    }
    vector <int> vv;
    int p = 0,p2 = 0;
    for(i = 0;i < n;i++){
        if(mem[i] != 1e9){
            if(me2[i] < me2[p]){
                p = i;
            }
        }
    }
    printf("%d %d %d",p,mem[p],me2[p]);
}
