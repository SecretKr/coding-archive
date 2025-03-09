#include "mushrooms.h"
#include<bits/stdc++.h>
 
/*int count_mushrooms(int n) {  10 point
	std::vector<int> m;
	bool a = 0;
	int ans = 1;
	for (int i = 0; i < n-1; i++){
		if(use_machine({i,i+1}) == 1){
			if(a) a = 0;
			else a = 1;
		}
		if(!a) ans++;
	}
	return ans;
}
16
0 0 1 1 1 0 1 0 1 0 1 0 0 0 0 0
*/

int count_mushrooms(int n){
	std::vector<int> m;
	bool a = 0;
	int ans = 1,i,t,j;
	for(i = 0;i < n-2;i+=2){
		if(a){
			t = use_machine({i,i+1,i+2});
			if(t == 1){
				a = 0;
				if(use_machine({i,i+1})) ans += 2;
				else ans++;
			}
			if(t == 2){
				ans++;
			}
		}
		else{
			t = use_machine({i,i+1,i+2});
			if(t == 0) ans += 2;
			if(t == 1){
				a = 1;
				if(use_machine({i,i+1}));
				else ans++;
			}
			if(t == 2){
				ans++;
			}
		}
	//printf("ans = %d i = %d\n",ans,i);
	}
	if(i < n-1){
		if(a){
			if(use_machine({i,i+1})) ans++;
		}
		else{
			if(!use_machine({i,i+1})) ans++; 
		}
	}
	return ans;
}