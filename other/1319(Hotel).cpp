#include<stdio.h>

int main()
{
    int j,n,t = 1;
    scanf("%d",&n);
    int a[n][n];
    for(int i = n;i >= 0;i--){
        j = 0;
        a[0][i] = t;
        t += 1;
        while(i <= n){
            a[j+1][i+1] = t;
            t += 1;
            j += 1;
        }
    }
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
}
