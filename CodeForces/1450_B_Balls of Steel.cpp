#include<bits/stdc++.h>
using namespace std;
int t;
int x[1000005];
int y[1000005];

int main()
{
    cin >> t;
    for(int T = 0;T < t;T++){
        int n,k;
        int i,j;
        cin >> n >> k;
        for(i = 0;i < n;i++){
            scanf("%d%d",&x[i],&y[i]);
        }
        bool f = 0;
        for(i = 0;i < n;i++){
            bool b = 1;
            for(j = 0;j < n;j++){
                if(abs(x[i]-x[j])+abs(y[i]-y[j]) > k){
                    b = 0;
                }
            }
            if(b){
                printf("1\n");
                f = 1;
                break;
            }
        }
        if(!f) printf("-1\n");
    }
}