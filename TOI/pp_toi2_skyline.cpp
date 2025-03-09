#include<bits/stdc++.h>
using namespace std;
int a[3005];

int main()
{
    int j,i,l,h,r,n,m=0;
    cin >> n;
    for(i = 0;i < n;i++){
        cin >> l >> h >> r;
        for(j = l;j < r;j++){
            a[j] = max(a[j],h);
        }
        m = max(m,r);
    }
    for(i = 0;i <= m;i++){
        if(a[i+1] != a[i]){
            cout << i+1 << " " << a[i+1] << " ";
        }
    }
}
