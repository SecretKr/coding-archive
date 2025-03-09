#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 0,s = 0;
    char c;
    c = getchar();
    while(c != '\n'){
        if(c == '(') a++;
        else a--;
        if(a < 0){
            s++;
            a = 0;
        }
        c = getchar();
    }
    s += a;
    cout << s;
}