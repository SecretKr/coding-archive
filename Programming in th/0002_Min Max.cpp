#include<bits/stdc++.h>

using namespace std;

int main()
{
    int M,m,n;
    cin >> n;
    int a[n];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    M = a[0];
    m = a[0];
    for(int i = 0;i < n;i++){
        if(a[i] < m)
            m = a[i];
        if(a[i] > M)
            M = a[i];
    }
    cout << m << endl << M;
}
