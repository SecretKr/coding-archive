#include<bits/stdc++.h>
using namespace std;

int n,k;
int wh[500],bl[500];
int mva[501][501],mc[501][501];

int va(int sta,int end){
    if(mva[sta][end]) return mva[sta][end];
    return mva[sta][end] = (bl[end]-bl[sta-1])*(wh[end]-wh[sta-1]);
}

int c(int s,int i)
{
    if(mc[s][i]) return mc[s][i];
    if(s == k){
        return mc[s][i] = va(i,n-1);
    }
    if(i >= n-(k-s)) return 0;
    int in = c(s+1,i+1);
    for(int ii = i+2;ii < n;ii++){
        if(in > c(s+1,ii)+va(i,ii)) in = c(s+1,ii)+va(i,ii);
    }
    return mc[s][i] = in;
}

int main()
{
    cin >> n >> k;
    bool a;
    for(int j = 0;j < n;j++){
        cin >> a;
        if(a == 1){
            bl[j] = bl[j-1]+1;
            wh[j] = wh[j-1];
        }
        else{
            bl[j] = bl[j-1];
            wh[j] = wh[j-1]+1;
        }
    }
    int in = c(1,0);
    for(int ii = 1;ii < n;ii++){
        if(in > c(1,ii)+va(0,ii)) in = c(1,ii)+va(0,ii);
    }
    cout << in;
}

