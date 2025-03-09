#include<stdio.h>

int main()
{
    int e,i,j,b[4][4],s[4] = {0,0,0,0};
    char a[5][20],c[4][20],d;

    for(i = 0;i < 4;i++)
        gets(a[i]);
    for(i = 0;i < 4;i++)
        for(j = 0;j < 4;j++)
            scanf("%d",&b[i][j]);

    for(i = 1;i < 4;i++){
        if(b[0][i] > b[i][0])
            s[0] += 3;
        if(b[0][i] < b[i][0])
            s[i] += 3;
        if(b[0][i] == b[i][0]){
            s[0] += 1;
            s[i] += 1;
        }
    }
    for(i = 2;i < 4;i++){
        if(b[1][i] > b[i][1])
            s[1] += 3;
        if(b[1][i] < b[i][1])
            s[i] += 3;
        if(b[1][i] == b[i][1]){
            s[1] += 1;
            s[i] += 1;
        }
    }
    if(b[2][3] > b[3][2])
        s[2] += 3;
    if(b[2][3] < b[3][2])
        s[3] += 3;
    if(b[2][3] == b[3][2]){
        s[2] += 1;
        s[3] += 1;
    }
    for(i = 0;i < 3;i++){
        for(j = 0;j < 3-i;j++)
            if(s[j] < s[j+1]){
                e = s[j];
                s[j] = s[j+1];
                s[j+1] = e;
                d = a[j];
                a[j] = a[j+1];
                a[j+1] = d;
        }
    }
    for(i = 0;i < 4;i++){
        printf("%s %d\n",a[i],s[i]);
    }
}
