#include<bits/stdc++.h>
using namespace std;
long long V,e,X,Y,A,B,T,K,a,b;
long long mem[100001];

struct s{
    long long x,y,t;
    bool operator < (s aa) const{
        return aa.t < t;
    }
};
struct ss{
    int y,t;
};

priority_queue <s> ve;
vector <ss> v[1000001];

int main()
{
    int i,j;
    cin >> V >> e >> X >> Y;
    cin >> A >> B >> T >> K;
    for(i = 0;i < e;i++){
        cin >> j >> a >> b;
        v[j].push_back({a,b});
    }
    for(i = 0;i < v[X].size();i++){
        ve.push({X,v[X][i].y,v[X][i].t});
    }
    while(!ve.empty()){
        s te = ve.top(); ve.pop();
        if(te.y == A && mem[te.x]+te.t <= K) ve.push({A,B,T});
        if(!mem[te.y] && te.y != 0){
            mem[te.y] = mem[te.x]+te.t;
            for(i = 0;i < v[te.y].size();i++){
                ve.push({te.y,v[te.y][i].y,v[te.y][i].t});
            }
        }
        else{
            if(mem[te.y] > mem[te.x]+te.t){
                mem[te.y] = mem[te.x]+te.t;
                for(i = 0;i < v[te.y].size();i++){
                    ve.push({te.y,v[te.y][i].y,v[te.y][i].t});
                }
            }
        }
    }
    cout << mem[Y];
}

/*
struct s{
    long long y,t;
    bool operator < (s aa) const{
        return aa.t < t;
    }
};

priority_queue <s> ve[1000001];

long long w(long long time,int lo)
{
    if(mem[lo]) return mem[lo];
    if(lo == y) return mem[lo] = time;
    if(lo == A && time <= K){
        ve[lo].push({B,T});
    }
    if(ve[lo].empty() == 1) return -1;
    s te = ve[lo].top(); ve[lo].pop();
    long long mi = w(time+te.t,te.y);
    while(!ve[lo].empty()){
        s te = ve[lo].top(); ve[lo].pop();
        if(w(time+te.t,te.y) != -1){
            if(mi > w(time+te.t,te.y)) mi = w(time+te.t,te.y);
        }
    }
    return mem[lo] = mi;
}

int main()
{
    int i,j;
    cin >> v >> e >> x >> y;
    cin >> A >> B >> T >> K;
    for(i = 0;i < e;i++){
        cin >> j >> a >> b;
        ve[j].push({a,b});
    }
    K += 10000;
    cout << w(10000,x)-10000;
}*/
