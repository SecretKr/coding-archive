#include <bits/stdc++.h>
using namespace std;

int x,y,z,i,m;

int main()
{
    scanf("%d%d%d",&x,&y,&z);
	while(x != 1 || y != 1 || z != 1){
		m = 0;
		if(m < x) m = x;
		if(m < y) m = y;
		if(m < z) m = z;
		if(m == x){
			x /= 2;
			i++;
		}
		if(m == y){
			y /= 2;
			i++;
		}
		if(m == z){
			z /= 2;
			i++;
		}
	}
	printf("%d",i);
}
