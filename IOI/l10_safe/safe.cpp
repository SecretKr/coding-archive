#include<bits/stdc++.h>
using namespace std;
int n,m;
int a,t;

int main(){
    cin >> n;
    scanf("%d%d",&t,&m);
    printf("0\n");
    for(int i = 1;i < n;i++){
        scanf("%d%d",&t,&a);
        if(a > m){
            printf("%d\n",a-m);
        }
        else{
            printf("0\n");
            if(a < m) m = a;
        }
    }
}