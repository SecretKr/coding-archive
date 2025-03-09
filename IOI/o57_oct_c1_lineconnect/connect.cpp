#include<bits/stdc++.h>
using namespace std;
int n;
int a[100005];
int b[100005];

int f(int x){
    if(b[x] == x) return x;
    return f(b[x]);
}
struct s{
    int x,p;
    bool operator < (s te) const{
        return x > te.x;
    }
};
priority_queue <s> pq;

int main()
{
    int i,j;
    cin >> n;
    for(i = 0;i < n;i++){
        scanf("%d",&a[i]);
        pq.push({a[i],i});
        b[i] = i;
    }
    int x,y;
    for(i = 0;i < n-2;i++){
        scanf("%d%d",&x,&y);
        x--; y--;
        if(b[x] == x){
            b[x] = f(y);
        }
        else b[f(y)] = f(x);
    }
    int mi = 1e9;
    
    

    s t = pq.top(); pq.pop();
    while(!pq.empty()){
        //printf(">>%d compare %d   %d\n",pq.top().p,b[f(t.p)],b[f(pq.top().p)]);
        if(b[f(t.p)] != b[f(pq.top().p)]){
            mi = min(mi,pq.top().x-t.x);
            //cout << pq.top().x << " " << t.x << endl;
        }
        t = pq.top(); pq.pop();
    }
    cout << mi << endl;
/*
    for(i = 0;i < n;i++){
        printf("%d ",b[f(i)]);
    }*/
}