#include<bits/stdc++.h>
using namespace std;
int n;
bool a[10000001];

int main()
{
    cin >> n;
    if(n == 1) cout << "2";
    else{
    int i,j;
    for(i = 3;i < 10000001;i+=2){
        if(!a[i]) for(j = i*2;j < 10000001;j+=i) a[j] = 1;
    }
    j = 1;
    for(i = 3;j < n;i+=2) if(!a[i]) j++;
    cout << i-2;
    }
}
