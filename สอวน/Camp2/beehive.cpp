#include<bits/stdc++.h>
using namespace std;
int n,m,k;
int a[10001][101];
int mem[10001][101];

struct s{
    int v,l;
    bool operator < (s te) const{
        return te.v > v;
    }
};
priority_queue <s> pq;

int main()
{
    int i,j,ma,l;
    cin >> n >> m >> k;
    for(i = 0;i < n;i++){
        for(j = 0;j < m;j++){
            cin >> a[j][i];
        }
    }
    for(i = 0;i < m;i++){
        mem[i][0] = a[i][0];
    }
    for(i = 1;i < n;i++){
        for(j = 0;j < m;j++){

            if(j+k < m) pq.push({mem[j+k][i-1],j+k});
            while(pq.top().l < j-k) pq.pop();
            mem[j][i] = pq.top().v + a[j][i];
        }
        while(!pq.empty()) pq.pop();
    }

    ma = 0;
    for(i = 0;i < m;i++){
        ma = max(ma,mem[i][n-1]);
    }
    cout << ma;
}
