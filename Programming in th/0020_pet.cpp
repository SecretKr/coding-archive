#include<stdio.h>

int main()
{
    int e,d,c,b,i,j;
    int a[10][10];

    for(j = 0;j < 5;j++)
        for(i = 0;i < 4;i++)
            scanf("%d",&a[i][j]);
    d = 0;
    for(j = 0;j < 5;j++){
        b = 0;
        for(i = 0;i < 4;i++)
            b += a[i][j];
        if(b > d){
            d = b;
            e = j+1;}}
    printf("%d %d",e,d);
}
