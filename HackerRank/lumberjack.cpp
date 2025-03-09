#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

int n,c;
long long k,a[100005];
bool o = 0;

int main() {
    cin >> n >> k;
    for(int i = 0;i < n;i++){
        scanf("%lld",&a[i]);
        if(a[i] >= k) c++;
        a[i] += a[i-1];
    }
    for(int i = 0;i < n-1;i++){
        for(int j = i+1;j < n;j++){
            if(a[j]-a[i-1] >= k) c++;
        }
    }
    cout << c;
    return 0;
}