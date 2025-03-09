#include<bits/stdc++.h>
using namespace std;
int n,to,i;

int main()
{
    cin >> n;
    to += n/15*3000;
    n %= 15;
    if(n >= 9){
        n = 0;
        to += 3000;
    }
    if(n >= 4){
        to += 1500;
        n -= 5;
    }
    if(n >= 2){
        to += 800;
        n -= 2;
    }
    if(n == 1) to += 500;
    cout << to;
}
