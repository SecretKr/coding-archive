#include "obstacle.h"
#include <bits/stdc++.h>
using namespace std;
int gm,gn;
map <int,long long> a[100000];
map <int,bool> b[100000];
struct s{
	int x,y;
};
queue <s> q;
bool check(int m,int n){
	if(n < gn && m < gm) return 1;
	return 0;
}
vector<std::vector<int>> growlen,gcollen;
void initialize(int N, int M, int Q,
		std::vector<std::vector<int>>& rowlen,
		std::vector<std::vector<int>>& collen)
{
	gn = N; gm = M;
	gcollen = collen; growlen = rowlen;
}

int ask(int r, int c)
{
	int i,j;
	if(c == 0) return -1;
	for(i = 0;i < gn;i++) for(j = 0;j < gm;j++) {a[j][i] = 1e18; b[j][i] = 0;}
	for(i = 0;i <= r;i++){
		b[c][i] = 1;
	}
	q.push({0,0});
	a[0][0] = 0;
	while(!q.empty()){
		int X = q.front().x;
		int Y = q.front().y;
		q.pop();
		if(check(X+1,Y)) if(!b[X+1][Y] && a[X+1][Y] > growlen[Y][X]+a[X][Y]){
			a[X+1][Y] = growlen[Y][X]+a[X][Y];
			q.push({X+1,Y});
		}
		if(check(X,Y+1)) if(!b[X][Y+1] && a[X][Y+1] > gcollen[Y][X]+a[X][Y]){
			a[X][Y+1] = gcollen[Y][X]+a[X][Y];
			q.push({X,Y+1});
		}
	}
	if(a[gm-1][gn-1] == 1e18 || a[gm-1][gn-1] < 0) return -1;
	return a[gm-1][gn-1];
}

