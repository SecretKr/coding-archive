#include<bits/stdc++.h>
using namespace std;
int a[1005],n,t,ans = 1e9;

int main()
{
    cin >> n;
    int i,j,x,y,a1,a2,a3,mi,ma;
    for(i = 1;i <= n;i++){
        cin >> t;
        a[i] = a[i-1]+t;
    }
    for(i = 1;i < n;i++){
        for(j = i+1;j <= n;j++){
            a1 = a[i-1];
            a2 = a[j-1]-a[i-1];
            a3 = a[n]-a[j-1];
            ma = max(a2,a1); ma = max(ma,a3);
            mi = min(a2,a1); mi = min(mi,a3);
            if(ma-mi < ans){
                ans = ma-mi;
                x = i;
                y = j;
            }
        }
    }
    printf("%d %d",x,y);
}
