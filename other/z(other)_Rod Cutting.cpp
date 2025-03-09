#include<bits/stdc++.h>
using namespace std;

int T,n,a[101],M;
int mem[101];

int s(int l){
    if(mem[l] != 0) return mem[l];
    int i;
    int max = 0;
    for(i = 1;i < l;i++){
        if(max < a[i-1] + s(l-i)) max = a[i-1] + s(l-i);
    }
    if(max < a[l-1]) max = a[l-1];
    mem[l] = max;
    return max;
}

int main()
{
    int i,j,k;
    cin >> T;
    for(k = 0;k < T;k++){
        for(i = 0;i < 101;i++) mem[i] = 0;
        cin >> n;
        for(i = 0;i < n;i++){
            cin >> a[i];
        }
        cout << s(n) << endl;
    }
}
