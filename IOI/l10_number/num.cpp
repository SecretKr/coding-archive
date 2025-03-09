#include<bits/stdc++.h>
using namespace std;

int a[12];
int n,t,w;

int main()
{
    cin >> w;
    int i,j = 1e9,best;
    for(i = 1;i < 10;i++){
        cin >> a[i];
        if(a[i] < j){
            j = a[i];
            best = i;
        }
    }
    n = w/a[best];
    w = w - a[best]*n;

    for(i = 0;i < n;i++){
        bool f = 1;
        for(j = 9;j > best;j--){
            if(w+a[best]-a[j] >= 0){
                f = 0;
                printf("%d",j);
                w -= a[j]-a[best];
                break;
            }
        }
        if(f){
            printf("%d",best);
        }
    }
}

/*#include<bits/stdc++.h>
using namespace std;

struct s{
    int p,v;
    bool operator < (s te) const{
        return te.p < p;
    }
};
priority_queue <s> pq;

s a[12];
int n,t,w;

int main()
{
    cin >> w;
    int i,j = 1e9,best;
    for(i = 1;i < 10;i++){
        cin >> t;
        pq.push({i,t});
    }
    i = 0;
    while(!pq.empty()){
        a[i] = pq.top();
        if(j > a[i].v){
            j = a[i].v;
            best = i;
        }
        pq.pop();
        i++;
    }
    n = w/a[0].v;
    w = w - a[0].v*n;
    for(i = 0;i < n;i++){
        bool f = 1;
        for(j = 8;j > 0;j--){
            if(w+a[0].v-a[j].v >= 0){
        printf(">> %d %d\n",a[i].p,a[i].v);
                f = 0;
                printf("%d",a[j].p);
                w -= a[j].v-a[0].v;
                break;
            }
        }
        if(f){
            printf("%d",a[0].p);
        }
    }
}*/