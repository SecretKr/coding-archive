#include<stdio.h>

int a[10];
bool b[10];
int n,m;

void f(int t){
    if(t > n){
        for(int i = 1;i <= n;i++){
            for(int j = 1;j <= n;j++){
                if(a[j] == i) printf("%d ",j);
            }
        }
        printf("\n");
    }
    else{
        for(int i = 1;i <= n;i++){
            if(!a[i]){
                a[i] = t;
                f(t+1);
                a[i] = 0;
            }
        }
    }
}

int main()
{
    scanf("%d%d",&n,&m);
    int c;
    for(int i = 0;i < m;i++){
        scanf("%d",&c);
        b[c] = 1;
    }
    for(int i = 1;i <= n;i++){
        if(!b[i]){
            a[i] = 1;
            f(2);
            a[i] = 0;
        }
    }
}