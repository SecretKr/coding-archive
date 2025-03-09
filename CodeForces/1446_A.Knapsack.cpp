#include<bits/stdc++.h>
using namespace std;
long long t,n,W,w,s;
bool b[200005];
int hs;

int main()
{
    cin >> t;
    int i,m;
    for(int T = 0;T < t;T++){
        bool f = 1;
        scanf("%d%lld",&n,&W);
        if(W%2) hs = W/2+1;
        else hs = W/2;
        s = 0; m = 0;
        for(i = 0;i < n;i++){
            scanf("%lld",&w);
            if(w <= W && w >= hs){
                printf("1\n%d\n",i+1);
                f = 0;

                for(int j = 0;j < i;j++) b[j] = 0;
                i++;
                while(i < n){
                    scanf("%lld",&w);
                    i++;
                }
                break;
            }
            if(w <= W){
                b[i] = 1;
                s += w;
                m++;
                if(s >= W/2 && s <= W){
                    printf("%d\n",m);
                    for(int j = 0;j <= i;j++){
                        if(b[j]) printf("%d ",j+1);
                        b[j] = 0;
                    }
                    printf("\n");
                    f = 0;

                    i++;
                    while(i < n){
                        scanf("%d",&w);
                        i++;
                    }
                    break;
                }
            }
        }
        if(f){
            printf("-1\n");
            for(int j = 0;j < i;j++) b[j] = 0;
        }

    }
}