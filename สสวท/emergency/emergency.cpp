#include "emergency.h"
#include "bits/stdc++.h"
using namespace std;
int a[200005];
bool visit[200005];
struct s{
	int y,c;
};
struct ss{
	int x,y,c;
};
vector <s> v[200005];
vector <ss> to;
queue <ss> q;

int furthest(int N, int H, int K,
	     int roads[][2],
	     int lengths[],
	     int hospitals[],
	     int centers[])
{
	int i,j;
	for(i = 0;i < N-1;i++){
		v[roads[i][0]].push_back({roads[i][1],lengths[i]});
		v[roads[i][1]].push_back({roads[i][0],lengths[i]});
	}
	int ma = 0;
	for(i = 0;i < H;i++){
		for(j = 0;j < K;j++){
			to.push_back({centers[j],hospitals[i],0});
		}
	}
	
	for(int T = 0;T < to.size();T++){
		for(i = 0;i <= N;i++){a[i] = 0; visit[i] = 0;}
		for(i = 0;i < v[to[T].x].size();i++){
			q.push({to[T].x,v[to[T].x][i].y,v[to[T].x][i].c});
		}
		while(!q.empty()){
			if(a[q.front().y] < a[q.front().x]+q.front().c && !visit[q.front().y]){
				a[q.front().y] = a[q.front().x]+q.front().c;
				visit[q.front().y] = 1;
				for(i = 0;i < v[q.front().y].size();i++){
					q.push({q.front().y,v[q.front().y][i].y,v[q.front().y][i].c});
				}
			}
			q.pop();
		}
		ma = max(ma,a[to[T].y]);
	}
	return ma;
}
