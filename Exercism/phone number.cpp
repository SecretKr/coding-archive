#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cou = 0;
    int i,a[100];
    char c;
    c = getchar();
    while(c != '\n'){
        if(c >= '0' && c <= '9'){
            a[cou++] = c - '0';
        }
        c = getchar();
    }
    for(i = 0;i < 10;i++){
        cout << a[cou-10+i];
    }
}