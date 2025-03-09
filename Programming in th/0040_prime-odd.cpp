#include<bits/stdc++.h>
using namespace std;

int n,i;
char t1,t2;
char c;
bool a[11];

int main()
{
    cin >> n;
    scanf(" ");
    for(i = 0;i < n;i++){
        c = getchar();
        t1 = '*';
        t2 = '*';
        while(c != '\n'){
            t2 = t1;
            t1 = c;
            c = getchar();
        }
        if(t1 == '2' && t2 == '*'){
            a[i] = 1;
        }
        else{
            if(t1%2 == 1) a[i] = 1;
        }
    }
    for(i = 0;i < n;i++){
        if(a[i] == 1) cout << "T" << endl;
        else cout << "F" << endl;
    }
}
