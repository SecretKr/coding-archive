#include<bits/stdc++.h>
using namespace std;
int n,t;
int a[1000001];
int b[1000001];

int main()
{
    cin >> n;
    int i,j,p = 0;
    cin >> a[0];
    for(i = 1;i < n;i++){
        scanf("%d",&t);
        if(t >= a[p]) a[++p] = t;
        else{
            for(j = 0;j < p && a[j] > t;j++);
            a[j] = t;
        }
    }
    cout << n-p-1;
}
