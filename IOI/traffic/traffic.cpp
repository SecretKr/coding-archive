#include<bits/stdc++.h>
using namespace std;
int n,T;
int m[100];

int f(int t,int p,int total,bool l){
    p += m[t];
    if(t >= n-1 && p == 0) return total;
    if(!l && t >= n-1) return 1e9;
    int mi = 1e9;
    if(l){
        p -= 10;
        if(p < 0) p = 0;
        if(p > T) return 1e9;
        return min(f(t+1,p,total+1,0),f(t+1,p,total+1,1));
    }
    else{
        if(p > T) return 1e9;
        return min(f(t+1,p,total,0),f(t+1,p,total+1,1));
    }
}

int main()
{
    cin >> n >> T;
    int i,j;
    for(i = 0;i < n;i++){
        cin >> m[i];
    }
    cout << f(0,0,0,0);
}