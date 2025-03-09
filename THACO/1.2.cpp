#include<bits/stdc++.h>
using namespace std;
int n,m;
bool a[205][100000];
bool sol[2000000],t[2000000];
int M = 0;

void f(int x,int y,int R,int G,int p)
{
    if(a[x][y]) R++;
    else G++;
    if(M > m+n-2-max(R,G)) return;
    if(x == n-1 && y == m-1){
        if(M < min(R,G)){
            M = min(R,G);
            for(int l = 0;l < m+n-2;l++){
                sol[l] = t[l];
            }
        }
    }
    if(x < n-1){
        t[p] = 0;
        f(x+1,y,R,G,p+1);
    }
    if(y < m-1){
        t[p] = 1;
        f(x,y+1,R,G,p+1);
    }
}

int main()
{
    cin >> n >> m;
    int i,j;
    char s[100000];
    for(i = 0;i < n;i++){
        scanf("%s",s);
        for(j = 0;j < m;j++){
            if(s[j] == 'R') a[i][j] = 1;
        }
    }
    f(0,0,0,0,0);
    cout << M*2 << endl;
    int G = 0,R = 0;
    int x = 0,y = 0;
    for(int l = 0;l < m+n-2;l++){
        if(a[x][y]){
            if(R < M){cout << "Y ";R++;}
            else cout << "N ";
        }
        else{
            if(G < M){cout << "Y ";G++;}
            else cout << "N ";
        }
        if(sol[l]){cout << "R" << endl;y++;}
        else{cout << "D" << endl;x++;}
    }
    if(a[x][y]){
        if(R < M){cout << "Y ";R++;}
        else cout << "N ";
    }
    else{
        if(G < M){cout << "Y ";G++;}
        else cout << "N ";
    }
}
