#include<bits/stdc++.h>
using namespace std;

int a[100005];
int s[100005];
int o[100005];
int k,n,m;

void swap(int x,int y){
    for(int i=0;i<(y-x+1)/2;i++){
        int t=a[x+i];
        a[x+i] = a[y-i];
        a[y-i] = t;
    }
}

int main()
{
    int l,r;
    cin >> n >> m >> k;
    for(int i=1;i<=n;i++){
        a[i] = i;
        s[i] = i;
    }
    for(int i=0;i<m;i++){
        cin >> l >> r;
        swap(l,r);
    }
    for(int i=1;i<=k;i++){
        for(int j=1;j<=n;j++){
            o[j] = s[j];
        }
        for(int j=1;j<=n;j++){
            s[j] = o[a[j]];
        }
    }
    for(int i=1;i<=10;i++){
        cout << s[i] << endl;
    }
}
