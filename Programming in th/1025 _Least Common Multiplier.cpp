#include<bits/stdc++.h>
using namespace std;
long long n,t,ans,t1;

long long f(long long a,long long b)
{
    if(b == 0){
        return a;
    }
    else return f(b,a%b);
}

int main()
{
    cin >> n;
    long long i;
    cin >> ans;
    for(i = 1;i < n;i++){
        cin >> t;
        ans = ans*t/f(ans,t);
    }
    cout << ans;
}
