#include<bits/stdc++.h>
using namespace std;
int a[1001][1001];
int i,j,n,m,k;

int main()
{
    cin >> m >> n >> k;
    for(i = 1;i <= m;i++){
        for(j = 1;j <= n;j++){
            scanf("%d",&a[i][j]);
            a[i][j] += a[i-1][j]+a[i][j-1]-a[i-1][j-1];
        }
    }
    int ma = 0;
    for(i = 1;i <= m-k+1;i++){
        for(j = 1;j <= n-k+1;j++){
            ma = max(ma,a[i+k-1][j+k-1]-a[i-1][j+k-1]-a[i+k-1][j-1]+a[i-1][j-1]);
        }
    }
    cout << ma;
}
