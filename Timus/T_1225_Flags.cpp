#include<bits/stdc++.h>
using namespace std;
/*
0 = blue;
1 = red;
2 = white;
*/
int n,k;
long long counter[2][1000];

long long t(short c,int o){
    if(counter[c][o] != 0){
    	return counter[c][o];
	}
    if(o == n){
        return 1;
    }
    else {
        if(c == 0){
        	counter[c][o] = t(1,1+o);
            return counter[c][o];
        }
        else {
			counter[c][o] = t(1,1+o)+t(0,1+o);
			return counter[c][o];
		}
    }
}

int main()
{
    cin >> n;
    cout << t(0,1)*2;
}
