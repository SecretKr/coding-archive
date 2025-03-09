#include<bits/stdc++.h>
using namespace std;

char a[101],c;
int n,i;

int main()
{
	c = getchar();
	while(c != '\n'){
		a[i++] = c;
		c = getchar();
	}
	n = i--;
	for(i = 0;i < n;i++){
		if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u'){
			a[i+1] = '*';
			a[i+2] = '*';
		}
	}
	for(i = 0;i < n;i++){
		if(a[i] != '*'){
			printf("%c",a[i]);
		}
	}
}
