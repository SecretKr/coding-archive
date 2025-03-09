#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[105];
int me[105][105][2];
int m2[105][105][2];
// red 0 green 1
int f(int s,int e,bool p){
    if(me[s][e][p]) return me[s][e][p];
    if(p && s == e) return -a[s];
    if(!p && s == e) return a[s];
    if(!p) return me[s][e][p] = max(a[s]+f(s+1,e,1),a[e]+f(s,e-1,1));
    else return me[s][e][p] = min(f(s+1,e,0)-a[s],f(s,e-1,0)-a[e]);
}

int f2(int s,int e,bool p){
    if(m2[s][e][p]) return m2[s][e][p];
    if(e < s) return 0;
    if(p && s == e) return -a[s];
    if(!p && s == e) return a[s];
    if(!p){
        if(a[s] == a[e] && s != e) return m2[s][e][p] = max(max(a[s]+f2(s+1,e,1),a[e]+f2(s,e-1,1)),a[s]+a[e]+f2(s+1,e-1,1));
        else return m2[s][e][p] = max(a[s]+f2(s+1,e,1),a[e]+f2(s,e-1,1));
    }
    else{
        if(a[s] == a[e] && s != e) return m2[s][e][p] = min(min(f2(s+1,e,0)-a[s],f2(s,e-1,0)-a[e]),f2(s+1,e-1,0)-a[s]-a[e]);
        else return m2[s][e][p] = min(f2(s+1,e,0)-a[s],f2(s,e-1,0)-a[e]);
    }
}

int main()
{
    cin >> m;
    for(int j = 0;j < m;j++){
        for(int ii=0;ii<105;ii++) for(int jj=0;jj<105;jj++) me[ii][jj][0] = me[ii][jj][1] = m2[ii][jj][0] = m2[ii][jj][1] = 0;
        cin >> n;
        for(int i = 0;i < n;i++){
            scanf("%d",&a[i]);
        }
        int ans = f(0,n-1,0);
        if(ans < 0) printf("Green ");
        if(ans == 0) printf("Tie ");
        if(ans > 0) printf("Red ");
        ans = f2(0,n-1,0);
        if(ans < 0) printf("Green\n");
        if(ans == 0) printf("Tie\n");
        if(ans > 0) printf("Red\n");
    }
}

