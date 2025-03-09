#include<stdio.h>

int main()
{
    int a,m,n,i,c,pl;

    scanf("%d",&m);
    scanf("%d",&n);

    int x[m];
    int y[n];
    int b[m][n];
    int bb[m][n];

    for(i = 0;i < m; i++){
        for(c = 0;c < n; c++)
            scanf("%d",&b[i][c]);
    }
    for(i = 0;i < m; i++){
        for(c = 0;c < n; c++)
            scanf("%d",&bb[i][c]);
    }
    for(i = 0;i < m; i++){
        for(c = 0;c < n; c++)
            printf("%d ",bb[i][c]+b[i][c]);
        printf("\n");
    }
}
