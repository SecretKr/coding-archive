#include<stdio.h>
int a[101],i,j,k,n,s;
int main()
{
	scanf("%d",&n);
	for(i = 0;i*20 <= n;i++){
		for(j = 0;i*20+j*9 <= n;j++){
			for(k = 0;i*20+j*9+k*6 <= n;k++){
				a[i*20+j*9+k*6] = 1;
			}
		}
	}
	for(i = 1;i <= n;i++){
		if(a[i] == 1){
			s = 1;
			printf("%d\n",i);
		}
	}
	if(s == 0) printf("no");
}
