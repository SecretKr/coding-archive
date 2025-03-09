#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "a";
    bool a[500];
    int i,m = 0,c = 0,st = 0;
    //for(int j = 'a';j <= 'z';j++) printf("%c",j);
    //cout << endl;
    for(i = 0;i < 256;i++) a[i] = 0;
    for(i = 0;i < s.length() && st < s.length();){
        cout << "in";
        if(a[s[i]] == 0){
            c += 1;
            a[s[i]] = 1;
            i++;
            m = max(m,c);
            cout << i << endl;
        }
        else{
            while(s[st] != s[i] && st < s.length()-2){
                c--;
                a[s[st]] = 0;
                st++;
            }
            st++;
            i++;
        }
        //for(int j = 'a';j <= 'z';j++) cout << a[j];
        //printf("  %d %d %d",st,i,c);
        //cout << endl;
    }
    printf("%d",m);
}