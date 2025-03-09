#include<bits/stdc++.h>
using namespace std;
int n,m,s,a[101];
int tx[] = {-1,0,1};
bool wall[41][101];
bool check(int x,int y){
    if(x<n && y<m && x >= 0 && y >= 0) return 1;
    return 0;
}

bool f(int x,int y){
    if(y == m-1){
        a[y] = x;
        return 1;
    }
    for(int i = 0;i < 3;i++){
        int X = x+tx[i],Y = y+1;
        if(check(X,Y) && !wall[X][Y]){
            if(f(X,Y)){
                a[Y] = X;
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    cin >> n >> s >> m;
    int i,j;
    for(i = 0;i < m;i++){
        for(j = 0;j < n;j++){
            cin >> wall[j][i];
        }
    }
    f(s-1,-1);
    int t = a[0]-s+1;
    if(t == 0) cout << 3 << endl;
    if(t == -1) cout << 1 << endl;
    if(t == 1) cout << 2 << endl;
    for(i = 0; i < m-1;i++){
        int t = a[i+1]-a[i];
        if(t == 0) cout << 3 << endl;
        if(t == -1) cout << 1 << endl;
        if(t == 1) cout << 2 << endl;
    }
    /*
    for(i = 0;i < m;i++){
        cout << a[i] << endl;
    }*/
}

