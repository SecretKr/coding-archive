#include<bits/stdc++.h>
using namespace std;
int n,m,tv;
int a[100001];
int o[100001];
int c;

int fo(int oo){
    if(o[oo] == oo) return oo;
    return o[oo] = fo(o[oo]);
}

struct s{
    int x,y,val;
    bool operator < (s t) const{
        return t.val<val;
    }
};
priority_queue <s> v;

int main()
{
    int i,x,y;
    scanf("%d",&n);
    for(i = 1;i <= n;i++){
        scanf("%d",&a[i]);
        o[i] = i;
    }
    scanf("%d",&m);
    for(i = 0;i < m;i++){
        scanf("%d%d",&x,&y);
        v.push({x,y,a[x]+a[y]});
    }
    while(!v.empty()){
        s t = v.top(); v.pop();
        if(fo(t.x) != fo(t.y)){
            o[fo(t.x)] = fo(t.y);
            tv += t.val;
            c++;
        }
        if(c == n) break;
    }
    printf("%d",tv);
}
