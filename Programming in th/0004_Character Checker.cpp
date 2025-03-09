#include<stdio.h>

bool ca = false,sm = false;

int main()
{
    char a;

    a = getchar();
    while(a != '\n'&&(ca&&sm) == false){
        if('A' <= a && a <= 'Z') ca = true;
        if('a' <= a && a <= 'z') sm = true;
        a = getchar();
        }
    if((ca&&sm) == true)
        printf("Mix");
    else
    if(ca == true)
        printf("All Capital Letter");
    else
        printf("All Small Letter");
}
