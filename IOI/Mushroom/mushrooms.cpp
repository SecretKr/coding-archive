#include "mushrooms.h"
#include<bits/stdc++.h>
 
/*
16
0 0 1 1 1 0 1 0 1 0 1 0 0 0 0 0
*/

int count_mushrooms(int n){
	std::vector<int> m;
	bool a = 0;
	int ans = 1,i,t,j;
	for(i = 0;i < n-3;i+=3){
        t = use_machine({i,i+1,i+2,i+3});
        if(t == 0 && !a) ans += 3;
        if(t == 3) {if(!a) {ans++; a = 1;}
            else {ans += 2; a = 0;}}
        if(t == 1){
            if(!a){
                a = 1;
                if(!use_machine({i,i+1,i+2})) ans += 2;
                else if(!use_machine({i,i+1})) ans++;
            }
            else{
                a = 0;
                if(!use_machine({i,i+1,i+2})) ans++;
                else{ if(!use_machine({i,i+1})) ans += 2;
                else ans += 3;}
            }
        }
        if(t == 2){
            if(!a){
                if(use_machine({i+1,i+2})) ans+=2;
                else ans++;
            }
            else{
                if(use_machine({i+1,i+2})) ans++;
                else ans+=2;
            }
        }
	//printf("ans = %d i = %d\n",ans,i);
	}
	if(i == n-3){
		j = use_machine({i,i+1,i+2});
        if(j == 2) ans++;
        if(j == 0) if(!a) ans+=2;
        if(j == 1){
            if(use_machine({i,i+1})){ if(a) ans+=2;}
            else ans++;
        }
	}
    if(i == n-2){
        if(a){
			if(use_machine({i,i+1})) ans++;
		}
		else{
			if(!use_machine({i,i+1})) ans++; 
		}
    }
	return ans;
}