#include<bits/stdc++.h>
using namespace std;

int a(int x,bool y){
    if(x==0&&y==0) return 1;
    if(x==0&&y==1) return 0;
    if(x<0) return 0;
    int t = 0;
    if(y) t+=a(x-1,0)+a(x-2,1);
    else {
        t+=2*a(x-3,1);
        t+=3*a(x-2,0);
    }
    return t;
}


int main()
{
    int n;
    cin >> n;
    while(n!=-1){
        printf("%d\n",a(n,0));
        cin >> n;
    }
}
