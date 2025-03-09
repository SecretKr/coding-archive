#include<bits/stdc++.h>
using namespace std;

long long ans;
int a[1000005];
int rh[1000005];
int rl[1000005];
int lh[1000005];
int ll[1000005];

int main()
{
    int n,k,i,j,t,l,s,m;
    cin >> n >> k;
    for(i = 0;i < n;i++){
        cin >> t;
        if(t < k) a[i] = -1;
        if(t > k) a[i] = 1;
        if(t == k){
            l = i;
        }
    }
    s = 0,m = 0;
    for(i = l-1;i >= 0;i--){
        s += a[i];
        if(s < 0) ll[-s]++;
        if(s > 0) lh[s]++;
        if(s == 0) lh[0]++;
        m = max(m,abs(s));
    }
    s = 0;
    for(i = l+1;i < n;i++){
        s += a[i];
        if(s < 0) rl[-s]++;
        if(s > 0) rh[s]++;
        if(s == 0) rh[0]++;
        m = max(m,abs(s));
    }
    ans = lh[0]*rh[0];
    for(i = 0;i <= m;i++){
        ans += rh[i]*ll[i];
        ans += rl[i]*lh[i];
    }
    cout << ans;
}
