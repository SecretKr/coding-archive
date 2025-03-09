#include<bits/stdc++.h>
using namespace std;
int n,k,t;
int a[500001];

struct s{
    int v,l;
    bool operator < (s te) const{
        return te.v < v;
    }
};

priority_queue <s> pq;

int main()
{
    int i,j;
    cin >> n >> k;
    cin >> t;
    a[0] = t;
    pq.push({t,0});
    for(i = 1;i < n;i++){
        cin >> t;
        while(pq.top().l < i-k) pq.pop();
        a[i] = pq.top().v+t;
        pq.push({a[i],i});
    }
    cout << a[n-1];
}
