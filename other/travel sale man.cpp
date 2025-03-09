#include<bits/stdc++.h>
using namespace std;
int a[10][10];
int b[10][10];
int s[10][10];
int n;

struct str
{
    int x,y;
};
queue <str> q;


int main()
{
    cin >> n;
    int i,j,mi,x,y,Q;
    for(i = 0;i < n;i++){
        for(j = 0;j < n;j++){
            cin >> a[j][i];
            if(a[j][i] == -1) a[j][i] = 1e9;
            b[j][i] = a[j][i];
        }
    }
    for(i = 0;i < n;i++){
        mi = 1e9;
        for(j = 0;j < n;j++) mi = min(mi,a[j][i]);
        if(mi) for(j = 0;j < n;j++) if(a[i][j] != 1e9) a[j][i] -= mi;
    }
    for(i = 0;i < n;i++){
        mi = 1e9;
        for(j = 0;j < n;j++) mi = min(mi,a[i][j]);
        if(mi) for(j = 0;j < n;j++) if(a[i][j] != 1e9) a[i][j] -= mi;
    }
    



    mi = 0;
    while(mi == 0){
        for(i = 0;i < n;i++){
            int co = 0;
            for(j = 0;j < n;j++) if(a[j][i] == 0 && s[j][i] == 0){ co++; x = j;}
            if(co == 1){
                q.push({x,i});
                for(j = 0;j < n;j++) s[x][j]++;
            }
        }
        for(i = 0;i < n;i++){
            int co = 0;
            for(j = 0;j < n;j++) if(a[i][j] == 0 && s[i][j] == 0){ co++; x = j;}
            if(co == 1){
                q.push({i,x});
                for(j = 0;j < n;j++) s[j][x]++;
            }
        }
        mi = 1e9;
        for(i = 0;i < n;i++){
            for(j = 0;j < n;j++){
                if(s[i][j] == 0) mi = min(mi,a[i][j]);
            }
        }
    }


    while(q.size() != 4){
        if(mi != 0){
            for(i = 0;i < n;i++){
                for(j = 0;j < n;j++){
                    if(s[i][j] == 0 && a[i][j] != 1e9) a[i][j] -= mi;
                    if(s[i][j] == 2 && a[i][j] != 1e9) a[i][j] += mi;
                }
            }
        }
        for(i = 0;i < n;i++){
            for(j = 0;j < n;j++){
                s[i][j] = 0;
            }
        }



        while(!q.empty()) q.pop();
        mi = 0;
        while(mi == 0){
            for(i = 0;i < n;i++){
                int co = 0;
                for(j = 0;j < n;j++) if(a[j][i] == 0 && s[j][i] == 0){ co++; x = j;}
                if(co == 1){
                    q.push({x,i});
                    for(j = 0;j < n;j++) s[x][j]++;
                }
            }
            for(i = 0;i < n;i++){
                int co = 0;
                for(j = 0;j < n;j++) if(a[i][j] == 0 && s[i][j] == 0){ co++; x = j;}
                if(co == 1){
                    q.push({i,x});
                    for(j = 0;j < n;j++) s[j][x]++;
                }
            }
            mi = 1e9;
            for(i = 0;i < n;i++){
                for(j = 0;j < n;j++){
                    if(s[i][j] == 0) mi = min(mi,a[i][j]);
                }
            }
        }
    }
    int ans[10];
    while(!q.empty()){
        ans[q.front().y] = q.front().x;
        q.pop();
    }

    printf("%d",1);
    x = 0;
    for(i = 0;i < n;i++){
        printf(" - %d",ans[x]+1);
        x = ans[x];
    }

    /*
    for(i = 0;i < n;i++){
        for(j = 0;j < n;j++){
            cout <<  a[j][i] << " ";
        }
        cout << endl;
    }*/

}
