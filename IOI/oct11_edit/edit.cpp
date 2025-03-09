#include<bits/stdc++.h>
using namespace std;

map <int,string> str;
int a[100005];
int ma = 0,strn = 1;

int main()
{
    int i,n,j,cur = 0;
    char c;
    cin >> n;
    for(i = 0;i < n;i++){
        cin >> c;
        if(c == 'l') { for(j = cur-1;a[j] == 0;j--); cur--;}
        if(c == 'r') for(j = cur+1;a[j] == 0 && j <= ma;j++);
        if(c == 'i'){
            cin >> str[strn];
            if(cur != 0){
                int t;
                for(j = cur+1;a[j] != 0;j++);
                t = j;
                for(j = j;j != cur;j--){
                    a[j] = a[j-1];
                }
            }
            a[cur] = strn++;
            cur++;
            ma = max(ma,cur);
        }
        if(c == 'b'){
            for(j = cur-1;a[j] == 0;j--);
            a[j] = 0;
        }
        if(c == 'd'){
            for(j = cur+1;a[j] == 0 && j <= ma;j++);
            a[j] = 0;
        }/*
        for(j = 0;j <= ma;j++){
            printf("%d ",a[j]);
        }
        cout << endl;*/
    }

    for(i = 0;i <= ma;i++){
        if(a[i]){
            cout << str[a[i]] << " ";
        }
    }
}