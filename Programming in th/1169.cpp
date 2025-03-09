#include<bits/stdc++.h>
using namespace std;
int n,t;
char c;

int main()
{
    c = getchar();
    while(c != '\n'){
        if(c == 40) n++;
        else n--;
        if(n < 0){
            t++;
            n = 0;
        }
        c = getchar();
    }
    t += n;
    cout << t;
}
