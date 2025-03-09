#include<bits/stdc++.h>
using namespace std;
int n;

int ff(int a,int r){
    int i,j,ans = 0;
    for(i = 1;i+a-1 <= r;i++){
        int t = 1;
        for(j = 1;j < i-1;j++){
            ans += ff()
        }
    }
}

int f(int a)
{
    if(a == 1) return 1;
    int i,ans ;
    for(i = 1;i <= a/2;i++){
        ans += ff(i,a-1);
    }
}

int main()
{
    cin >> n;
    cout << f(n);
}





/*
int ff(int a,int r){
    int i,j,ans = 0;
    for(i = 1;i+a-1 <= r;i++){
        int t = 1;
        for(j = 1;j < i-1;j++){
            ans += ff()
        }
    }
}

int f(int a)
{
    if(a == 1) return 1;
    int i,ans = 1+f(a-1);
    for(i = 1;i < a-1;i++){
        ans += ff(i,a-1);
    }
}

int main()
{
    cin >> n;
    cout << f(n);
}*/