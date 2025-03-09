#include<bits/stdc++.h>
using namespace std;

int a[100005];
int k,n,m;
int l[100005];
int r[100005];

void swap(int x,int y){
    for(int i=0;i<(y-x+1)/2;i++){
        int t=a[x+i];
        a[x+i] = a[y-i];
        a[y-i] = t;
    }
}

int main()
{
    cin >> n >> m >> k;
    for(int i=1;i<=n;i++){
        a[i] = i;
    }
    for(int i=0;i<m;i++){
        cin >> l[i] >> r[i];
    }
    for(int j=1;j<=k;j++){
        for(int i=0;i<m;i++){
            swap(l[i],r[i]);
        }
    }
    for(int i=1;i<=10;i++){
        cout << a[i] << endl;
    }
}
