#include<bits/stdc++.h>
using namespace std;
int n,m = 1e9;
int a[25];
bool b[25];

int f(int t)
{
    int i,j,mi = 1e9,c;
    if(t <= 0) return 0;
    for(i = 0;i < n;i++){
        int co = 0;
        bool aa[] = {0,0,0};
        if(b[i]) {aa[0] = 1; co++;}
        if(b[(i+1)%n]) {aa[1] = 1; co++;}
        if(b[(i+2)%n]) {aa[2] = 1; co++;}
        b[i] = 1;
        b[(i+1)%n] = 1;
        b[(i+2)%n] = 1;
        c = 0;
        for(j = 0;j < n;j++){
            if(!b[j]) c += a[j];
        }
        cout << c << endl;
        if(co != 3) mi = min(mi + c,f(t-3+co) + c);
        if(!aa[0]) b[i] = 0;
        if(!aa[1]) b[(i+1)%n] = 0;
        if(!aa[2]) b[(i+2)%n] = 0;
    }
    return mi;
}

int main()
{
    cin >> n;
    int i;
    for(i = 0;i < n;i++){
        cin >> a[i];
    }
    cout << f(n-1);
}
