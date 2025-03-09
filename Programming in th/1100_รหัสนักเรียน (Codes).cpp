#include<bits/stdc++.h>
using namespace std;

int n,i,j,k;
long long t;
bool y;

int main()
{
    scanf("%d",&n);
    int a[n];
    for(i = 0;i < n;i++){
        scanf("%d",&a[i]);
    }
    for(j = 0;j < n-1;j++){
        for(i = j+1;i < n;i++){
            y = 0;
            if(a[i]/100 == a[j]/100) y = 1;
            if((a[i]%100)/10 == (a[j]%100)/10 && y == 0) y = 1;
            if(a[i]%10 == a[j]%10 && y == 0) y = 1;
            if(y == 1) t++;
        }
    }
    cout << t;
}
