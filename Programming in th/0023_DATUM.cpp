#include<bits/stdc++.h>
using namespace std;

int d,m,i,s;
int a[] = {31,28,31,30,31,30,31,31,30,31,30,31};

int main()
{
	scanf("%d%d",&d,&m);
	for(i = 0;i < m;i++){
		if(m-1 == i){
			s += d;
		}
		else s += a[i];
	}
	s %= 7;
	switch(s){
		case 1 : printf("Thursday"); break;
		case 2 : printf("Friday"); break;
		case 3 : printf("Saturday"); break;
		case 4 : printf("Sunday"); break;
		case 5 : printf("Monday"); break;
		case 6 : printf("Tuesday"); break;
		case 0 : printf("Wednesday"); break;
	}
}
