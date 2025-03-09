#include<bits/stdc++.h>
using namespace std;

int n,a[20],t;

int md(int i,int sA)
{
    int ma,mb;
    if(i == n || sA > t/2){
        return abs(t-2*sA);
    }
    else{
        ma = md(i+1,sA + a[i]);
        mb = md(i+1,sA);
        return min(ma,mb);
    }
}

int main()
{
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> a[i];
        t += a[i];
    }
    cout << md(0,0);
}
