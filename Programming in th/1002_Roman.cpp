#include<stdio.h>
int a[5],i,n,d;
// 0 i    1 v    2 x    3 l    4 c
int main()
{
	scanf("%d",&d);
	for(i = 1;i <= d;i++){
		n = i;
		if(n >= 100){
			a[4] += n/100;
			n %= 100;
		}
		if(n >= 50){
			if(n/10 == 9){
				a[2]++;
				a[4]++;
				n %= 10;
			}
			else{
				a[3] += n/50;
				n %= 50;
			}
		}
		if(n >= 10){
			if(n/10 == 4){
				a[2]++;
				a[3]++;
				n %= 10;
			}
			else{
				a[2] += n/10;
				n %= 10;
			}
		}
		if(n >= 5){
			if(n == 9){
				a[2]++;
				a[0]++;
				n = 0;
			}
			else{
				a[1] += n/5;
				n %= 5;
			}
		}
		if(n >= 1){
			if(n == 4){
				a[1]++;
				a[0]++;
				n = 0;
			}
			else{
				a[0] += n;
			}
		}
	}
	for(i = 0;i < 5;i++){
		printf("%d ",a[i]);
	}
}
