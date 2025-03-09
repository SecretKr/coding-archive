#include<bits/stdc++.h>
using namespace std;
long long t,n,W,w,s;
bool b[200005];
int hs,a[200005];

int main()
{
    cin >> t;
    int i,m;
    for(int T = 0;T < t;T++){
        bool f = 1;
        scanf("%d%lld",&n,&W);
        if(W%2) hs = W/2+1;
        else hs = W/2;
        for(i = 0;i < n;i++){
            scanf("%d",&a[i]);
            if(a[i] >= hs && a[i] <= W && f){
                printf("1\n%d\n",i+1);
                f = 0;
            }
        }
        if(f){
            s = 0; m = 0;
            for(i = 0;i < n;i++){
                if(a[i] <= W){
                    s+=a[i];
                    m++;
                    b[i] = 1;
                    if(s >= hs && s <= W){
                        printf("%d\n",m);
                        for(int j = 0;j < n;j++){
                            if(b[j]) printf("%d ",j+1);
                            b[j] = 0;
                        }
                        printf("\n");
                        f = 0;
                        break;
                    }
                }
            }
            if(f){
                printf("-1\n");
            }
        }
    }
}