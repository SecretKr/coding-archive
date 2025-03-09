#include<bits/stdc++.h>
//#include<iostream>
using namespace std;
#define size 1000000
int n;
int a[size];

int main()
{
    cin >> n;
    int i,j;

    for(i = 3;i < n;i+=2){
        if(!a[i]) for(j = i*2;j < n;j+=i){
            a[j] = 1;
        }
    }
    for(i = 2;i < 20;i++){
        if(i%2) printf("%d %d\n",i,a[i]);
        else printf("%d %d\n",i,1);
    }
}