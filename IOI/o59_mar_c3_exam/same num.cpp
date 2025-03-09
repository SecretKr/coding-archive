#include<bits/stdc++.h>
using namespace std;
int n;
int a[50005];
map <int,int> m;


struct s{
    int x,y,p;
    bool operator < (s t) const{
        return t.x < x;
    }
};
struct ss{
    int n,v;
    bool operator < (ss t) const{
        return t.n < n;
    }
};

priority_queue <s> pq;
priority_queue <ss> ans;

int main()
{
    int M,i,x,y;
    cin >> n;
    for(i = 0;i < n;i++) scanf("%d",&a[i]);
    cin >> M;
    for(i = 0;i < M;i++){
        scanf("%d%d",&x,&y);
        pq.push({x,y,i});
    }
    
    x = pq.top().x;
    y = pq.top().y;
    int co = 0;
    for(i = x;i <= y;i++){
        m[a[i]]++;
        if(m[a[i]] == 2) co++;
    }
    ans.push({pq.top().p,co});
     pq.pop();
    while(!pq.empty()){
        for(i = x;i <= pq.top().x;i++){
            m[a[i]]--;
            if(m[a[i]] == 1) co--;
        }
        if(pq.top().y > y){
            for(i = y+1;i <= pq.top().y;i++){
                m[a[i]]++;
                if(m[a[i]] == 2) co++;
            }
        }
        if(pq.top().y < y){
            for(i = y;i > pq.top().y;i--){
                m[a[i]]--;
                if(m[a[i]] == 1) co--;
            }
        }
        ans.push({pq.top().p,co});
        x = pq.top().x;
        y = pq.top().y; pq.pop();
    }
    while(!ans.empty()){
        cout << ans.top().v << endl;
        ans.pop();
    }
}