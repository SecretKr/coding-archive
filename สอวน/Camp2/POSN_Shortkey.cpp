#include<bits/stdc++.h>
using namespace std;
int n,m,sk;
int a[200002];
struct s{
    int x,y;
};
queue <int> q;
vector <int> S[200002];
int main()
{
    cin >> n >> sk >> m;
    int i,x,y;
    for(i = 0;i <= n;i++){
        a[i] = 1e9;
    }
    for(i = 0;i < sk;i++){
        scanf("%d%d",&x,&y);
        S[x].push_back(y);
    }
    a[0] = 0;
    q.push(0);
    while(!q.empty()){
        int t = q.front(); q.pop();
        if(a[t]+1 < a[t+1]){
            a[t+1] = a[t]+1;
            q.push(t+1);
        }
        for(i = 0;i < S[t].size();i++){
            if(a[t]+1 < a[S[t][i]]){
                a[S[t][i]] = a[t]+1;
                q.push(S[t][i]);
            }
        }
    }
    cout << a[n] << endl;
    if(a[n] <= m) cout << "1";
    else{
        for(i = n;i >= 0;i--){
            if(a[i] <= m) {cout << "0 " << i; break;}
        }
    }
}
/*
8 3 1
0 3
0 4
3 7

*/
