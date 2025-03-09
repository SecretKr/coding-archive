#include<bits/stdc++.h>
using namespace std;

int n,m,l,k,c,i,j,p,a;

int main()
{
    cin >> n >> m >> l >> k >> c;
    for(i = 0;i < n;i++){
        for(j = 0;j < m;j++){
            cin >> a;
            p += a;
        }
    }
    p += l*k*c;
    if(p%c == 0) cout << p/c;
    else cout << p/c+1;
}
