#include<bits/stdc++.h>
using namespace std;
int n,k;
map <long long, long long> a;

int main()
{
    cin >> n >> k;
    int i,j;
    a[0] = 0;
    for(i = 1;i <= n;i++){
        scanf("%lld",&a[i]);
        a[i] += a[i-1];
    }
    long long ma = -1e9*2;
    for(i = 1;i <= n-k+1;i++){
        if(ma < a[i+k-1]-a[i-1]){
            ma = a[i+k-1]-a[i-1];
        }
    }
    cout << ma;
}