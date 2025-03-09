#include<bits/stdc++.h>
using namespace std;
int n,a,b,X,Y,XX = 1e9,YY = 1e9;
long long ans = 1e18;
int x[50005],y[50005];

int main()
{
    cin >> n;
    int i,j;
    for(i = 0;i < n;i++){
        scanf("%d%d",&a,&b);
        x[i] = a; y[i] = b;
        X = max(X,a); Y = max(Y,b);
        XX = min(XX,a); YY = min(YY,b);
    }
    for(i = 0;i < n;i++){
        if(x[i] == X || y[i] == Y || x[i] == XX || y[i] == Y){
            int xx = 0,yy = 0,xm = 1e9,ym = 1e9;
            for(j = 0;j < n;j++){
                if(j != i){
                    xx = max(xx,x[j]); yy = max(yy,y[j]);
                    xm = min(xm,x[j]); ym = min(ym,y[j]);
                }
            }
            long long temp = (xx-xm)*(yy-ym);
            ans = min(ans,temp);
        }
    }
    cout << ans;
}
