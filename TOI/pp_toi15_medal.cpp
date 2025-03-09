#include<bits/stdc++.h>
using namespace std;
int n;
int a[500005];
int b[500005];

int main()
{
    cin >> n;
    int i,j;
    for(i = 0;i < n;i++){
        scanf("%d",&a[i]);
    }
    for(i = 0;i < n;i++){
        scanf("%d",&b[i]);
    }
    int t;
    for(i = 1;i < n;i++){
        for(j = 0;j < n-i;j++){
            if(a[j] > a[j+1]){
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
    for(i = 1;i < n;i++){
        for(j = 0;j < n-i;j++){
            if(b[j] > b[j+1]){
                t = b[j];
                b[j] = b[j+1];
                b[j+1] = t;
            }
        }
    }
    int mi = 1e9,ma = 0;
    for(i = 1;i <= n;i++){
        //cout << a[i-1] << " " << b[n-i] << endl;
        mi = min(mi,a[i-1]+b[n-i]);
        ma = max(ma,a[i-1]+b[n-i]);
    }
    cout << ma-mi;
}
