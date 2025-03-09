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
        while(!a[i]){
            s te = pq.top();
            if(te.l >= i-k){
                a[i] = te.v+t;
            }
            else pq.pop();

        }
        pq.push({a[i],i});
    }
    cout << a[n-1];
}

