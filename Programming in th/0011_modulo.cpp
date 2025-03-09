#include <stdio.h>

int main()
{
    int i,a,b,c;
    int s[10],o[10];

    c = 0;

    for(i = 0;i < 10;i++ )
        scanf("%d",&s[i]);

    for(i = 0;i < 10;i++ ){
        o[i] = s[i]%42;
        b = 1;
        for(a = 0;a < i;a++ )
            if(o[i] == o[a])
                b = 0;
        if(b == 1)
            c += 1;}
    printf("%d",c);
}
