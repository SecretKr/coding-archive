#include<stdio.h>

int main()
{
    int n,a,b,i,m,c;

    scanf("%d",&n);

    for(i = 9;i < n;i++){
        if(n%i == 0){
            c = 10;
            a = i;
            b = n/a;
            if(b >= 10)
                c = 100;
            if((a*c)+b < m)
                m = (a*c)+b;
        }
    }
    printf("%d",m);
}
