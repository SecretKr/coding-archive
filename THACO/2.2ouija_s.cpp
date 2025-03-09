#include<bits/stdc++.h>
using namespace std;
int r,c;

long long f(int a,int b,int x,int y)
{
    if(a >= r || x >= r || b >= c || y >= c) return 0;
    if(a == r-1 && b == c-1) return 1;
    //if(a == x && b == y && b == c-2 || a == r-2) return 2;
    if(a == x) return 2*f(a+1,b,x,y+1);
    return f(a+1,b,x+1,y) + f(a+1,b,x,y+1) + f(a,b+1,x+1,y) + f(a,b+1,x,y+1);
}

int main()
{
    cin >> r >> c;
    cout << f(0,0,0,0);
}

