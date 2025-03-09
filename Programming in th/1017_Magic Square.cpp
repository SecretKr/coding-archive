#include<bits/stdc++.h>
using namespace std;
int n,a[11],b[11],t,c[11][11];
bool check[101];

int main()
{
    cin >> n;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            cin >> c[i][j];
            a[j] += c[i][j];
            b[i] += c[i][j];
            if(check[c[i][j]] || c[i][j] > n*n){
                return 0;
            }
            check[c[i][j]] = 1;
        }
    }
    bool yes = true;
    t = a[0];
    for(int i = 0;i < n;i++){
        if(t == a[i] && b[i] == t);
        else yes = false;
    }
    a[0] = 0;
    b[0] = 0;
    for(int i = 0;i < n;i++){
        a[0] += c[i][i];
        b[0] += c[i][n-i-1];
    }
    if(t == a[0] && b[0] == t);
    else yes = false;

    if(yes) cout << "Yes";
    else cout << "No";
}
