#include<bits/stdc++.h>
using namespace std;
int n,m,k;
int con[100005];
int cd;

struct s{
    int a,b,c;
    bool operator < (s te) const{
        return te.c < c;
    }
};
priority_queue <s> pq;

int f(int N){
    if(con[N] == N) return N;
    return con[N] = f(con[N]);
}

int main()
{
    cin >> n >> m >> k;
    int a,b,c;
    for(int i = 0;i < m;i++){
        scanf("%d%d%d",&a,&b,&c);
        pq.push({a,b,c});
    }
    for(int i = 0;i <= n;i++) con[i] = i;
    int count = n-k-1;
    while(!pq.empty()){
        s t = pq.top(); pq.pop();
        if(f(t.a) != f(t.b)){
            cd += t.c;
            if(f(t.a) == t.a) con[f(t.a)] = f(t.b);
            else con[f(t.b)] = f(t.a);
            count--;
        }
        if(!count) break;
    }
    cout << cd;
}