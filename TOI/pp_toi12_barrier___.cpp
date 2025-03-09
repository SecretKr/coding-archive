#include<bits/stdc++.h>
using namespace std;
int a[6000001],n,w;

deque <int> dq;

int main()
{
    scanf("%d%d",&n,&w);
    int i;
    for(i = 1;i <= n;i++){
        scanf("%d",&a[i]);
        a[i] += a[i-1];
    }
    int ma[] = {0,0};
    dq.push_back(0);
    for(i = 1;i <= n;i++){
        while(a[i] <= a[dq.back()]){
            dq.pop_back();
            if(dq.empty()) break;
        }
        dq.push_back(i);
        while(dq.front() < i-w){
            dq.pop_front();
            if(dq.empty()) break;
        }
        if(a[i]-a[dq.front()] > ma[0]){
            ma[0] = a[i]-a[dq.front()];
            ma[1] = i-dq.front();
        }
        else if(a[i]-a[dq.front()] == ma[0]){
            ma[1] = min(ma[1],i-dq.front());
        }
    }
    /* ORIGINAL
    for(i = 1;i <= w;i++){
        if(a[i-1] > ma[0]){
            ma[0] = a[i-1];
            ma[1] = i;
        }
        for(j = i;j < n;j++){
            if(a[j]-a[j-i] > ma[0]){
                ma[0] = a[j]-a[j-i];
                ma[1] = i;
            }
        }
    }
    */
    if(ma[0] <= 0) printf("0\n0");
    else printf("%d\n%d",ma[0],ma[1]);
}
