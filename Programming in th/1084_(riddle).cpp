#include<bits/stdc++.h>
using namespace std;

long long x,y,k,n,a,i,j,t;

long long f(long long b){
	if(b <= 1) return 1;
	else return b*f(b-1);
}

int main()
{
	scanf("%lld%lld%lld",&x,&y,&k);
	t = f(x-1);
	for(i = x;i <= y;i++){
		t *= i;
		while(t%10 == 0){
			n += y-i+1;
			t /= 10;
			n %= k;
		}
	}
	n %= k;
	printf("%lld",n);
}
