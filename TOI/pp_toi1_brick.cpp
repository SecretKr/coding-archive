#include<bits/stdc++.h>
using namespace std;

int i,j,n,m,k;

int main()
{
    cin >> n >> m;
    char a[n][m];
    for(i = 0;i < n;i++){
        for(j = 0;j < m;j++){
            scanf(" %c",&a[i][j]);
        }
    }
    int b[m];
    for(i = 0;i < m;i++){
        cin >> b[i];
    }
    for(j = 0;j < m;j++){
        for(i = 0;i < n && a[i][j] == '.';i++);
        i--;
        for(k = i;k >= 0 && k > i-b[j];k--) a[k][j] = '#';
    }
    for(i = 0;i < n;i++){
        for(j = 0;j < m;j++){
            printf("%c",a[i][j]);
        }
        cout << endl;
    }
}
