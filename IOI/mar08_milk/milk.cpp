#include<bits/stdc++.h>
using namespace std;
int a[100005];
int n,q;
char c;


int f(int x){
    if(a[x] == x) return x;
    else return f(a[x]);
}

int main()
{
    cin >> n >> q;
    int i,x,y;
    for(i = 1;i <= n;i++) a[i] = i;
    for(i = 0;i < q;i++){
        scanf(" %c %d %d",&c,&x,&y);
        if(c == 'c'){
            if(a[y] == y) a[y] = f(x);
            a[f(x)] = f(y);
        }
        else{
            if(f(x) == f(y)) printf("yes\n");
            else printf("no\n");
        }
    }
}