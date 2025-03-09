#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,i;
    cin >> n >> k;
    for(i = n;i > 0;i--){
        int t = pow(2,i-1);
        if(((k)/t)%2 == 1) cout << "1";
        else cout << "0";
    }
}
