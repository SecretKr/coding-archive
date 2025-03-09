#include <stdio.h>

int main()
{
    int i,a,b,c,d;

    scanf("%d %d %d",&a,&b,&c);

    d = a+b+c;
    if(d<50)
        printf("F");
    else
        if(d<55)
            printf("D");
        else
            if(d<60)
                printf("D+");
            else
                if(d<65)
                    printf("C");
                else
                    if(d<70)
                        printf("C+");
                    else
                        if(d<75)
                            printf("B");
                        else
                            if(d<80)
                                printf("B+");
                            else
                                printf("A");




}
