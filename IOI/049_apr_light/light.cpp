#include<bits/stdc++.h>
using namespace std;
int l,n;
int a[100000];

int main()
{
    int i,j,t;
    cin >> l >> n;
    a[1] = l;
    for(i = 2;i <= n+1;i++){
        cin >> a[i];
        for(j = i;j > 1;j--){
            if(a[j] < a[j-1]){
                t = a[j];
                a[j] = a[j-1];
                a[j-1] = t;
            }
            else break;
        }/*
        printf(">>");
        for(j = 0;j <= i;j++) printf("%d ",a[j]);
        cout << endl;*/

        int ans = 0;
        if(i%2 == 0){
            for(j = i-1;j > 0;j-=2){
                ans += a[j]-a[j-1];
            }
        }
        else{
            for(j = i;j > 0;j-=2){
                ans += a[j]-a[j-1];
            }
        }
        cout << ans << endl;
    }
}