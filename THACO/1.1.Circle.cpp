#include<bits/stdc++.h>
using namespace std;
int n,m;
int ax[1000];
int ay[1000];

int main()
{
    cin >> m >> n;
    int i,j;
    for(i = 0;i < m;i++){
        cin >> ax[i] >> ay[i];
    }
    int x,y,r;
    int ans = n;
    for(j = 0;j < n;j++){
        cin >> x >> y >> r;
        int c = 0;
        for(i = 0;i < m;i++){
            if(sqrt(pow(ax[i]-x,2)+pow(ay[i]-y,2)) <= r){
                c++;
            }
        }
        if(c == m || c == 0) ans--;
    }
    cout << ans << endl;
}
/*
#include<bits/stdc++.h>
using namespace std;
int n,m;
int ax[1000];
int ay[1000];

struct cir{
    int x,y,r;
    bool operator < (cir aa) const{
        return aa.r > r;
    }
};
priority_queue <cir> pq;

int main()
{
    cin >> m >> n;
    int i,j;
    for(i = 0;i < m;i++){
        cin >> ax[i] >> ay[i];
    }
    int x,y,r;
    for(i = 0;i < n;i++){
        cin >> x >> y >> r;
        pq.push({x,y,r});
    }
    while(!pq.empty()){
        cir te = pq.top(); pq.pop();
        int c = 0;
        for(i = 0;i < m;i++){
            if(sqrt(pow(ax[i]-te.x,2)+pow(ay[i]-te.y,2)) < te.r){
                c++;
            }
        }
        if(c == m || c == 0) n--;
    }
    cout << n;
}
*/
