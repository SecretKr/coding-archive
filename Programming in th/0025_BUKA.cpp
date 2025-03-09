#include<bits/stdc++.h>
using namespace std;

long long a,b,i;
char o,c;

int main()
{
	c = getchar();
	while(c != '\n'){
		c = getchar();
		a += 1;
	}
	scanf("%c ",&o);
	c = getchar();
	while(c != '\n'){
		c = getchar();
		b += 1;
	}
	if(o == '*'){
		printf("1");
		for(i = 0;i < a+b-2;i++) printf("0");
	}
	else{
		if(a == b){
			printf("2");
			for(i = 0;i < a-1;i++) printf("0");
		}
		if(a > b){
			printf("1");
			for(i = 0;i < a-b-1;i++) printf("0");
			printf("1");
			for(i = 0;i < b-1;i++) printf("0");
		}
		if(b > a){
			printf("1");
			for(i = 0;i < b-a-1;i++) printf("0");
			printf("1");
			for(i = 0;i < a-1;i++) printf("0");
		}
	}
}
