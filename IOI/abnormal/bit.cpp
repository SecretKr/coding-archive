#include<bits/stdc++.h>
using namespace std;
int n,g,k,l,r;
int a[1005];
char c;

int main()
{
    cin >> n >> g >> k >> l >> r;
    scanf(" ");
    int i,j;
    if(r == 1){
        for(j = 0;j < k;j++){
            for(i = 0;i < n;i++){
                c = getchar();
                if(c == '1') a[i] = 1;
                else a[i] = 0;
            }
            c = getchar();
            for(i = 0;i < n;i++) printf("%d",a[i]);
            for(i = 0;i < n;i++) printf("%d",a[i]);
            if(g != 1){
                for(i = 0;i < n;i++) printf("%d",a[i]);
            }
            cout << endl;
        }
    }
    else{
        for(j = 0;j < k;j++){
            if(g == 1){
                for(i = 0;i < n*2;i++){
                    c = getchar();
                    if(c == '1') a[i] = 1;
                    if(c == '0') a[i] = 0;
                    if(c == 'x') a[i] = 2;
                }
                c = getchar();

                for(i = 0;i < n;i++){
                    if(a[i] != 2) printf("%d",a[i]);
                    else printf("%d",a[n+i]);
                }
            }
            else{
                for(i = 0;i < n*3;i++){
                    c = getchar();
                    if(c == '1') a[i] = 1;
                    if(c == '0') a[i] = 0;
                    if(c == 'x') a[i] = 2;
                }
                c = getchar();

                for(i = 0;i < n;i++){
                    if(a[i] == a[n+i]) printf("%d",a[i]);
                    else{if(a[i] == a[n*2+i]) printf("%d",a[i]);
                    else{if(a[n*2+i] == a[n+i]) printf("%d",a[n+i]);
                    }}
                }
            }
            cout << endl;
        }
    }
}