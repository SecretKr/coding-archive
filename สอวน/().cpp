#include<bits/stdc++.h>
using namespace std;

int n;

int f(int a,int p)
{
    if(p == 2*n){
        if(a > 0) return 0;
        else return 1;
    }
    if(2*n-p < a) return 0;
    int t = 0;
    if(a > 0){
        t = f(a-1,p+1);
    }
    t += f(a+1,p+1);
    return t;
}

int main()
{
    cin >> n;
    cout << f(0,0);
}
