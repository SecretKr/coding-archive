#include<bits/stdc++.h>
using namespace std;

int n,t = 2;
char c;

int main()
{
    cin >> n;
    scanf(" ");
    t += n;
    for(int i = 0;i < n;i++){
        c = getchar();
        while(c != '\n'){
            if(c == '+') t++;
            c = getchar();
        }
    }
    if(t == 13) cout << "1400";
    else cout << t*100;
}
