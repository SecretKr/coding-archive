#include <stdio.h>

int main()
{
    int n,i;
    char a[1000][30];

    scanf("%d\n",&n);
    for(i = 0;i < n;i++)
        gets (a);
    printf("%s",a);
}
