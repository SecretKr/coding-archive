#include<bits/stdc++.h>
using namespace std;
char a[] = "UUDDLRLRBAS";

int main()
{
    char c,p = ' ';
    int i;
    bool f = 0;
    c = getchar();
    while(c != '\n'){
        if(c == 'U' && p == 'U'){
            f = 1;
            i = 1;
        }
        if(f){
            if(a[i] == c) i++;
            else f = 0;
        }
        p = c;
        c = getchar();
    }
    if(f){
        for(int j = i;j < 11;j++){
            printf("%c",a[j]);
        }
    }
    else{
        if(p == 'U') printf("UDDLRLRBAS");
        else printf("UUDDLRLRBAS");
    }
}