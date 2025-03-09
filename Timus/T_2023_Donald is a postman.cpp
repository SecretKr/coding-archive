#include<bits/stdc++.h>
using namespace std;

int n,c,i,t,a;
char s[10];

int main()
{
    cin >> n;
    for(i = 0;i < n; i++){
        scanf(" ");
        gets(s);
        if(s[0] == 'A' || s[0] == 'P' || s[0] == 'O' || s[0] == 'R') a = 0;
        else{
            if(s[0] == 'B' || s[0] == 'M' || s[0] == 'S') a = 1;
            else a = 2;}
        t += abs(a-c);
        c = a;
    }
    cout << t;
}
