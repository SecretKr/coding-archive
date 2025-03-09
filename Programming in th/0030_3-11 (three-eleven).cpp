#include<bits/stdc++.h>
using namespace std;

int d,e,r3,r11,i;
char c;

int main()
{
	c = getchar();
	while(c != '\n'){
		d = c-48+10*r3;
		e = c-48+10*r11;
		r3 = d%3;
		r11 = e%11;
		c = getchar();
	}
	cout << r3 << " " << r11;
}
