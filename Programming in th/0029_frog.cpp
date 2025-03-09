#include <stdio.h>

int main()
{
    int a,x,y;

    a = 0;
    scanf("%d %d",&x,&y);
    if(y%x > 0)
        a += 1;
    if(y < x)
        a += 1;
    printf("%d\n",y/x+a);

    return 0;
}
