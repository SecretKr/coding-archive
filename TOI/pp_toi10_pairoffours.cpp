#include<bits/stdc++.h>
using namespace std;
int k,a[1001];
bool v[1001];
char c;

int main()
{
    cin >> k;
    int i;
    for(i = 0;i < k;i++){
        scanf(" %c ",&c);
        if(c == 'U') a[i] = 0;
        if(c == 'B') a[i] = 1;
        if(c == 'O') a[i] = 2;
        if(c == 'N') a[i] = 3;
    }
    int ma = 0;
    for(i = 0;i < k;i++){
        v[i] = 1;
        ma = max(ma,fn(i));
        v[i] = 0;
    }

}
