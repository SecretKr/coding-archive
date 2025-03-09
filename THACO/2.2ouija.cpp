#include<bits/stdc++.h>
using namespace std;
long long mem[1000][1000];

long long f(int r,int c)
{
    if(mem[r][c]) return mem[r][c];
    int t,i,m = 0;
    if(r > c){
        t = r;
        r = c;
        c = t;
    }
    if(r == 2) return 2;
    if(r < 2) return 0;
    m += 2*f(r-1,c-1);
    for(i = 2;i <= r-2;i++) m += f(i,c-1)*2;
    for(i = 2;i <= c-2;i++) m += f(r-1,i)*2;
    return mem[r][c] = m;
}

int main()
{
    int r,c;
    cin >> r >> c;
    if(r < c) cout << f(r,c);
    else cout << f(c,r);
}
