#include<bits/stdc++.h>
using namespace std;

int n,k;
long long mm[2][1801];

long long t(bool c,int o){

    if (mm[c][o] == 0) {
        if(o == n){
            if(c == 0) mm[c][o] = k-1;
            else mm[c][o] = k;
        }
        else {
            if(c == 0){
                mm[c][o] = t(1,1+o)*(k-1);
            }
            else mm[c][o] = t(1,1+o)*(k-1)+t(0,1+o);
        }
    }
    return mm[c][o];
}

int main()
{
    cin >> n >> k;
    cout << t(0,1);
}
