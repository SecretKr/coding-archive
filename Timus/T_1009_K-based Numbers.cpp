#include<bits/stdc++.h>
using namespace std;

int n,k;

int t(bool c,int o){
    if(o == n){
        if(c == 0) return k-1;
        else return k;
    }
    else {
        if(c == 0){
            return t(1,1+o)*(k-1);
        }
        else return t(1,1+o)*(k-1)+t(0,1+o);
    }
}

int main()
{
    cin >> n >> k;
    cout << t(0,1);
}
