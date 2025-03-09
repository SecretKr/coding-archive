#include<bits/stdc++.h>
using namespace std;
int n,i,j,t[3];
bool a[11];
char c;

int main()
{
    scanf("%d ",&n);
    for(i = 0;i < n;i++){
        int t[] = {0,0,0};
        c = getchar();
        while(c != '\n'){
            if(a[i] == 0){
                if(c == '(') t[0]++;
                if(c == ')') t[0]--;
                if(c == '[') t[1]++;
                if(c == ']') t[1]--;
                if(c == '{') t[2]++;
                if(c == '}') t[2]--;
                cout << i << t[0] << t[1] << t[2] << endl;
                if(t[0] < 0 || t[1] < 0 || t[2] < 0){
                    a[i] = true;
                }
            }
            c = getchar();
        }
        if(a[i] == 0) if(t[0] != 0 || t[1] != 0 || t[2] != 0) a[i] = true;
    }
    for(i = 0;i < n;i++){
        if(!a[i]) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}
