#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[505];
int b[505];
bool c[505];

priority_queue <int> pq;
queue <int> q;

int main()
{
    cin >> n >> k;
    int i,j,l,r;
    for(i = 0;i < k;i++){
        cin >> l >> r;
        for(j = l;j <= r;j++){
            a[j-1]++;
        }
    }
    for(i = 0;i < n;i++){
        pq.push(a[i]);
    }
    for(i = 1;i <= (n+1)/2;i++){
        q.push(i);
        q.push(n+1-i);
    }
    while(!pq.empty()){
        int m = pq.top(); pq.pop();
        for(i = 0;a[i]!=m || b[i];i++);
        b[i] = q.front(); q.pop();
    }
    for(i = 0;i < n;i++){
        cout << b[i] << " ";
    }
}
