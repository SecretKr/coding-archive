#include<bits/stdc++.h>
using namespace std;
int n,m = 1e9,mh = 1e9;
int a[500005],b[500005],t;
int ai;
long long ans = 1e18,ans2;
bool visit[1000000005];

int main()
{
    scanf("%d",&n);
    int i;
    for(i = 0;i < n;i++){
        scanf("%d",&b[i]);
        mh = min(mh,b[i]);
    }
    for(i = 0;i < n;i++){
        scanf("%d",&a[i]);
        m = min(a[i],m);
    }
    for(i = 0;i < n;i++){
        ans2 = 0;
        if(a[i] <= mh && !visit[a[i]]){
            visit[a[i]] = 1;
            for(int j = 0;j < n;j++){
                if(j != i){
                    if(a[j] >= a[i]) ans2 += a[j]-a[i];
                    else ans2 += a[j]-a[i]+b[j];
                }
            }
            if(ans2 < ans){
                ans = ans2;
                ai = a[i];
            }
        }
    }
    printf("%d %lld",ai,ans);
}
