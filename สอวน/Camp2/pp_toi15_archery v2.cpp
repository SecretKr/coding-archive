#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int n,mh = 1e9;
int b[500005],t;
int ai = 1;
long long ans,ans2;
unordered_map<long long ,long long> a;

int main()
{
    scanf("%d",&n);
    int i;
    for(i = 0;i < n;i++){
        scanf("%d",&b[i]);
        mh = min(mh,b[i]);
    }
    for(i = 0;i < n;i++){
        scanf("%d",&t);
        ans2 += t-1;
        if(t <= mh) a[t] += b[i];
    }
    ans = ans2;
    for(i = 2;i <= mh;i++){
        ans2 -= n;
        ans2 += a[i-1];
        if(ans2 < ans){
            ans = ans2;
            ai = i;
        }
    }
    printf("%d %lld",ai,ans);
}
