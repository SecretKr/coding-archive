#include<bits/stdc++.h>
using namespace std;
int n,a[5],ans,t,qu,ha;

int main()
{
    cin >> n;
    int i,j;
    for(i = 0;i < n;i++){
        for(j = 0;j < 5;j++){
            cin >> t;
            a[j] += t;
        }
    }
    ans += a[0];
    ans += a[1];
    qu = a[1];
    if(a[2]%2 == 0) ans += a[2]/2;
    else{
        ans += a[2]/2+1;
        qu += 2;
    }
    while(qu < a[3]){
        ans += 1;
        qu += 4;
    }
    qu -= a[3];
    ha = qu*2;
    while(ha < a[4]){
        ans += 1;
        ha += 8;
    }
    cout << ans;
}
