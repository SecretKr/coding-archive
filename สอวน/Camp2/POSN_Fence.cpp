#include<bits/stdc++.h>
using namespace std;
int n,m,t;
bool wall[505][505];
int wal2[505][505];

int main()
{
    cin >> m >> n >> t;
    int i,j,x,y;
    for(i = 0;i < t;i++){
        scanf("%d%d",&x,&y);
        wall[x+1][y+1] = 1;
    }
    for(i = 1;i <= m;i++){
        for(j = 1;j <= n;j++){
            wal2[i][j] = wall[i][j]+wal2[i-1][j]+wal2[i][j-1]-wal2[i-1][j-1];
        }
    }
    int ma,ma0;
    bool o = 0;
    for(ma = min(n,m);ma > 0;ma--){
        if(!o){
        for(i = 0;i <= m-ma;i++){
            if(!o){
            for(j = 0;j <= n-ma;j++){
                if(wal2[i+ma][j+ma]-wal2[i][j+ma]-wal2[i+ma][j]+wal2[i][j]-(wal2[i+ma-1][j+ma-1]-wal2[i+1][j+ma-1]-wal2[i+ma-1][j+1]+wal2[i+1][j+1]) == 0){
                    ma0 = ma;
                    o = 1;
                    break;
                }
            }
            }
        }
        }
    }

    for(i = 1;i <= m;i++){
        for(j = 1;j <= n;j++){
            wall[i][j] = 0;
            wal2[i][j] = 0;
        }
    }
    // #2
    cin >> m >> n >> t;
    for(i = 0;i < t;i++){
        scanf("%d%d",&x,&y);
        wall[x+1][y+1] = 1;
    }
    for(i = 1;i <= m;i++){
        for(j = 1;j <= n;j++){
            wal2[i][j] = wall[i][j]+wal2[i-1][j]+wal2[i][j-1]-wal2[i-1][j-1];
        }
    }
    o = 0;
    for(ma = min(n,m);ma > 0;ma--){
        if(!o){
        for(i = 0;i <= m-ma;i++){
            if(!o){
            for(j = 0;j <= n-ma;j++){
                if(wal2[i+ma][j+ma]-wal2[i][j+ma]-wal2[i+ma][j]+wal2[i][j]-(wal2[i+ma-1][j+ma-1]-wal2[i+1][j+ma-1]-wal2[i+ma-1][j+1]+wal2[i+1][j+1]) == 0){
                    cout << ma0 << endl << ma;
                    o = 1;
                    break;
                }
            }
            }
        }
        }
    }
}
/*
5 8
3
1 4
3 3
2 6
3 3
1
0 1
*/
