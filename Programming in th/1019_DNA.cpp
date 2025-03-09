#include<bits/stdc++.h>
#include <string.h>
using namespace std;
char a[205],b[205];
char ans[205];
int ann = 0;
int n,i,j,A,B,k;
char c;

int main()
{
    scanf("%s",a);
    scanf("%s",b);
    A = strlen(a);
    B = strlen(b);
    for(k = -A+1;k <= B-1;k++){
        if(k < 0){
        for(i = 0;i <= A+k;i++){
            if(b[i] == a[-k+i]){
                for(j = i;b[j] == a[-k+j] && j < A && j < B;j++);
                if(ann <= j-i){
                    ann = j-i;
                    for(j = i;b[j] == a[-k+j] && j < A && j < B;j++) ans[j-i] = b[j];
                }
            }
        }}
        else{
        for(i = k;i < B;i++){
            if(b[i] == a[i-k]){
                for(j = i;b[j] == a[-k+j] && j < A && j < B;j++);
                if(ann <= j-i){
                    ann = j-i;
                    for(j = i;b[j] == a[-k+j] && j < A && j < B;j++) ans[j-i] = b[j];
                }
            }
        }
        }
    }
    for(i = 0;i < ann;i++){
        cout << ans[i];
    }
}
