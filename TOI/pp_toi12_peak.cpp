#include<bits/stdc++.h>
using namespace std;
int n,k,c;
int a[5000005];
bool b[5000005];
int d[500005];
int f;

priority_queue <int> pq;

int main()
{
    int i,j;
    cin >> n >> k;
    for(i = 0;i < n;i++){
        scanf("%d",&a[i]);
        if(a[i] < a[i-1] && a[i-1] > a[i-2]){
            bool F = 0;
            for(j = 0;j < c;j++) if(d[j] == a[i-1]) F = 1;
            if(!F){
                b[i-1] = 1;
                d[c++] = a[i-1];
                f++;
            }
        }
    }
    if(a[n-1] > a[n-2]){
        bool F = 0;
        for(j = 0;j < c;j++) if(d[j] == a[i-1]) F = 1;
        if(!F){
            b[n-1] = 1;
            d[c++] = a[i-1];
            f++;
        }
    }
/*
    cout << endl;
    for(i = 0;i < n;i++){
        cout << b[i];
    }*/

    if(f == 0) cout << "-1" << endl;
    else if(f >= k){
        for(i = 0;i < n;i++){
            if(b[i]) pq.push(a[i]);
        }
        for(i = 0;i < k;i++){
            cout << pq.top() << endl; pq.pop();
        }
    }
    else{
        for(i = 0;i < n;i++){
            if(b[i]) pq.push(-a[i]);
        }
        while(!pq.empty()){
            cout << -pq.top() << endl; pq.pop();
        }
    }
}
