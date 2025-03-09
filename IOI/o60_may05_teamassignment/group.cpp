#include<bits/stdc++.h>
using namespace std;
int N,L,U;
int a[100005];
int mem[100005];

int f(int p){
    if(mem[p]) return mem[p];
    if(L+p > N) return -1;
    int i,m = 1e9,ma = 0,m2 = 0;
    for(i = p;i < L+p-1;i++) ma = max(ma,a[i]);
    bool ch = 0;
    for(i = p+L-1;i < p+U && i < N;i++){
        ma = max(ma,a[i]);
        if(f(i+1) != -1){m2 = max(m2,min(ma,f(i+1))); ch = 1;}
        if(i == N-1) return mem[p] = ma;
    }
    if(!ch) return mem[p] = -1;
    return mem[p] = m2;
}

int main()
{
    cin >> N >> L >> U;
    int i;
    for(i = 0;i < N;i++) cin >> a[i];
    cout << f(0);
}