#include<bits/stdc++.h>
using namespace std;
int a[10000];
int n,t;

int b(int l,int A)
{
    if(l == n || A > t/2){
        return abs(t-A-A);
    }
    else{
        int ma,mb;
        if(b(l+1,A+a[l]) < b(l+1,A)){
            return b(l+1,A+a[l]);
        }
        else{
            return b(l+1,A);
        }
    }
}

int main()
{
    cin >> n;
    int i;
    for(i = 0;i < n;i++){
        cin >> a[i];
        t += a[i];
    }
    cout << (t-b(1,0))/2;
}
