#include<bits/stdc++.h>
using namespace std;
int n,i,j;
bool p[10000002];

int main()
{
    cin >> n;
    for(i = 3;i < 10000002;i+=2){
        if(!p[i]){
            for(j = i*2;j < 10000002;j+=i){
                p[j] = 1;
            }
        }
    }
    for(i = n;i < 10000002;i++){
        if(!p[i] && i%2){
            if(i < 10){cout << i; break;}
            if(i >= 10 && i < 100){if(i%10 == i/10){cout << i; break;}}
            if(i >= 100 && i < 1000){if(i%10 == i/100) {cout << i; break;}}
            if(i >= 1000 && i < 10000){if(i%10 == i/1000 && (i/10)%10 == (i/100)%10) {cout << i; break;}}
            if(i >= 10000 && i < 100000){if(i%10 == i/10000 && (i/10)%10 == (i/1000)%10) {cout << i; break;}}
            if(i >= 100000 && i < 1000000){if(i%10 == i/100000 && (i/10)%10 == (i/10000)%10 && (i/100)%10 == (i/1000)%10){ cout << i; break;}}
            if(i >= 1000000 && i < 10000000){if(i%10 == i/1000000 && (i/10)%10 == (i/100000)%10 && (i/100)%10 == (i/10000)%10){ cout << i; break;}}
        }
    }
}
