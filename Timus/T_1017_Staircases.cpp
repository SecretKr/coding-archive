#include<bits/stdc++.h>
using namespace std;
int n;
long long mem[501][501];

long long fn(int r,int mi){
    if(mem[r][mi]) return mem[r][mi];
    if(r == 0) return 1;
    if(r < mi) return 0;
    int i;
    long long c = 0;
    for(i = mi;i <= r;i++){
        c += fn(r-i,i+1);
    }
    return mem[r][mi] = c;
}

int main()
{
    cin >> n;
    int i;
    long long c = 0;
    for(i = 1;i <= (n-1)/2;i++){
        c += fn(n-i,i+1);
    }
    cout << c;
}
