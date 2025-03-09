#include<bits/stdc++.h>
using namespace std;
char c;
char a[200005],b[200005];


bool f(int s,int e,int x,int y){
    int i;
    bool t = 1;
    for(i = 0;i <= e-s;i++){
        if(a[s+i] != b[x+i]){
            t = 0;
            break;
        }
    }
    if(t) return 1;
    if((e-s+1)%2) return 0;
    return (f(s,s+(e-s)/2,x,x+(y-x)/2) && f(s+(e-s)/2+1,e,x+(y-x)/2+1,y)) ||
           (f(s,s+(e-s)/2,x+(y-x)/2+1,y) && f(s+(e-s)/2+1,e,x,x+(y-x)/2));
}

int main()
{
    int n = 0;
    c = getchar();
    while(c != '\n'){
        a[n++] = c;
        c = getchar();
    }
    n = 0;
    c = getchar();
    while(c != '\n'){
        b[n++] = c;
        c = getchar();
    }
    if(f(0,n-1,0,n-1)) printf("YES");
    else printf("NO");
}