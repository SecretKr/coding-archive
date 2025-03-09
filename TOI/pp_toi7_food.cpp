#include<bits/stdc++.h>
using namespace std;
int n,m,s[10];
bool a[10],b[10];

void fn(int p){
    int i;
    if(p == n+1){
        for(i = 1;i <= n;i++){
            printf("%d ",s[i]);
        }
        cout << endl;
    }
    for(i = 1;i <= n;i++){
        if(!b[i]){
            s[p] = i;
            b[i] = 1;
            fn(p+1);
            b[i] = 0;
        }
    }
}

int main()
{
    cin >> n >> m;
    int i,t;
    for(i = 1;i <= m;i++){
        cin >> t;
        a[t] = 1;
    }
    for(i = 1;i <= n;i++){
        if(!a[i]){
            s[1] = i;
            b[i] = 1;
            fn(2);
            b[i] = 0;
        }
    }
}
