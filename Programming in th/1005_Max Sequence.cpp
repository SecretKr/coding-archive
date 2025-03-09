#include<bits/stdc++.h>
using namespace std;
int n,a[2505],ans = -1e9;
deque <int> dq;

int main()
{
    cin >> n;
    int i,w;
    for(i = 1;i <= n;i++){
        cin >> a[i];
    }
    dq.push_back(0);
    for(w = 1;w <= n;w++){
    for(i = 1;i <= n;i++){
        while(a[i] <= a[dq.back()]){
            dq.pop_back();
            if(dq.empty()) break;
        }
        while(i-w > dq.front()){
            dq.pop_front();
            if(dq.empty()) break;
        }
        if(a[i]-a[dq.front()] > ans){
            ans = a[i]-dq.front();
        }
    }}
    cout << ans;
}
