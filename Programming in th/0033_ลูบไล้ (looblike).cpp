#include<bits/stdc++.h>
using namespace std;

int n,a[10000],i,m,t;

int main()
{
	scanf("%d",&n);
	for(i = 0;i < n;i++){
		scanf("%d",&t);
		a[t] += 1;
	}
	for(i = 0;i < 10000;i++){
		if(m < a[i]){
			m = a[i];
		}
	}
	for(i = 0;i < 10000;i++){
		if(m == a[i]){
			cout << i << " ";
		}
	}
}
