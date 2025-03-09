#include<stdio.h>
#include<algorithm>

int p[5000001];
bool notp[100000001];
int k[50001];

int main()
{
    int a,i,j,t = 0;

    scanf("%d",&a);
    for(i = 0;i < a;i++){
        scanf("%d",&k[i]);
    }
    p[t++] = 2;
    for(i = 2; i*p[t-1] < 100000001; i++){
        notp[i*p[t-1]] = true;
    }
    for(i = 3;i  < 100000001;i += 2){
        if(notp[i] == false){
            p[t++] = i;
            for(j = i;j*i < 100000001;j += i){
                notp[j] = true;
            }
        }
    }
    for(i = 0;i < a;i++)
        printf("%d\n",p[k[a]]);
}
