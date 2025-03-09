#include<bits/stdc++.h>
using namespace std;

struct s{
    int y,d;
};

int n,m,MV=1e9,M;
int mem[10005];
int me2[10005];
vector <s> q[10005];

void f1(int X,int Y)
{
    for(int i = 0;i < q[X].size();i++){
        if(q[X][i].d+mem[X] < mem[q[X][i].y]){
            mem[q[X][i].y] = q[X][i].d+mem[X];
            f1(q[X][i].y,Y);
        }
    }
}

void f2(int X,int Y,int D)
{
    for(int i = 0;i < q[X].size();i++){
        if(q[X][i].d+me2[X] < me2[q[X][i].y]){
            if(D - q[X][i].d >= 0){
                me2[q[X][i].y] = q[X][i].d+me2[X];
                f2(q[X][i].y,Y,D - q[X][i].d);
            }
            else if(MV > mem[X]){
                MV = mem[X];
                M = X;
                cout << "SA";
            }
        }
    }
}

int main()
{
    int i,j,u[m+5],v[m+5],p[m+5],x,y,d;
    cin >> n >> m;
    cin >> x >> y >> d;
    for(i = 0;i <= n;i++){
        mem[i] = me2[i] = 1e9;
    }
    for(i = 0;i < m;i++){
        cin >> u[i] >> v[i] >> p[i];
        q[u[i]].push_back({v[i],p[i]});
        q[v[i]].push_back({u[i],p[i]});
    }
    mem[y] = 0;
    f1(y,x);
    me2[x] = 0;
    f2(x,y,d);
    cout<< mem[x] <<endl;
    printf("%d %d %d",M,me2[M],MV);
}
