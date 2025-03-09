#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);

    while(a != 0){
        c = a;
        a = b%a;
        b = c;}

    printf("%d",b);
}
