#include<iostream>
using namespace std;

bool q[1000];

int main()
{
    int n,k,i,j,b = 0;

    cin >> n >> k;
    
    for(i = 2;i <= n;i++){
    	if(q[i] == false){
	        for(j = i;j <= n;j += i){
	            if(q[j] == false){
	                q[j] = true;
	                b++;
	                if(b == k){
	                    cout << j;
	                    break;
	                }
	            }
	        }
	    }
    }
}
