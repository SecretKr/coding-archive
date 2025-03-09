#include<bits/stdc++.h>
using namespace std;

int n,k,i,j,c;

int main()
{
	cin >> k >> n;
	bool a[k],b[k],p;
	for(i = 0;i < k;i++){
		a[i] = 0;
		b[i] = 0;
	}
	b[k-1] = 1;
	for(i = 0;i < n;i++){
		for(j = 0;j < k;j++){
			if(a[j] != b[j]) c++;
		}
		for(j = 0;j < k;j++){
			a[j] = b[j];
			printf("%d",a[j]);
		}
		printf("\n");
		p = 1;
		for(j = k-1;j >= 0;j--){
			if(p == 1 && b[j] == 1){
				b[j] = 0;
				/*if(b[j-1] == 1){
					p = 1;
				}
				else {
					p = 0;
					b[j-1] = 1;
				}*/
			}
			else {
				b[j]++;
				p = 0;
				break;
			}
		}
	}
	cout << c;
}
