#include<bits/stdc++.h>
using namespace std;
char c;
int n = 0,n1,a[201];
bool p = true;
stack <int> s;
stack <int> t;

int main()
{
    c = getchar();
    while(c != '\n'){
        if(c >= 'a' && c <= 'z') c -= 32;
        a[n++] = c;
        c = getchar();
    }
    n--;
    for(int i = 0;i <= n/2;i++){
        s.push(a[i]);
    }
    if(n%2 == 0) s.pop();
    for(int i = n/2+1;i <= n;i++){
        if(a[i] != s.top()) {p = false; break;}
        s.pop();
    }
    if(p){
        if(n%2) n1 = n/2;
        else n1 = n/2-1;
        for(int i = 0;i <= (n1-1)/2;i++){
            t.push(a[i]);
        }
        for(int i = (n1/2)+1;i <= n1;i++){
            if(a[i] != t.top()) {p = false; break;}
            t.pop();
        }
        if(p) cout << "Double Palindrome";
        else cout << "Palindrome";
    }
    else cout << "No";
}
