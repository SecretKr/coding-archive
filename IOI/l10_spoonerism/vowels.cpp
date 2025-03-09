#include<bits/stdc++.h>
using namespace std;
char c,a[105];
int n,m;
int x1,yy1,x2,y2;

int main()
{
    int i,j;
    cin >> n;
    c = getchar();
    for(i = 0;i < n;i++){
        int f=0;
        c = getchar();
        m = 0;
        while(c != '\n'){
            a[m] = c;
            if(f == 3){
                if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
                else{
                    f = 2;
                    y2 = m-1;
                }
            }
            if(f == 2){
                if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
                    f = 3;
                    x2 = m;
                }
            }
            if(f == 1){
                if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
                else{
                    f = 2;
                    yy1 = m-1;
                }
            }
            if(!f){
                if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
                    f = 1;
                    x1 = m;
                }
                else{
                    printf("%c",c);
                }
            }
            c = getchar();
            m++;
        }
        if(f == 3) y2 = m-1;
        for(j = x2;j <= y2;j++) printf("%c",a[j]);
        for(j = yy1+1;j < x2;j++) printf("%c",a[j]);
        for(j = x1;j <= yy1;j++) printf("%c",a[j]);
        for(j = y2+1;j < m;j++) printf("%c",a[j]);
        cout << endl;
    }
}