#include<bits/stdc++.h>
using namespace std;

int a,b,c;

int main()
{
    cin >> a >> b >> c;
    if(b <= 1 || c <= 1) cout << a-b-c;
    else cout << a-b*c;
}
