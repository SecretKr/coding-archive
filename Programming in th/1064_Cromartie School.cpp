#include <bits/stdc++.h>
using namespace std;

int tx[] = {1,0,-1,0};
int ty[] = {0,1,0,-1};

int x,y,i,j,k,l,X[65],Y[65],c,co[65][65],cc;
char a[65][65];
int t[65][65];
bool p[1000];
bool visit[65][65];
struct pos{
	int x1,y1;
};
queue <pos> q;

int main() {
	cin >> x >> y;

	for(i = 1;i <= y;i++) for(j = 1;j <= x;j++) {
		cin >> a[i][j];
		if(a[i][j] == 'T'){
			t[i][j] = 1;
		}
		t[i][j] += t[i-1][j] + t[i][j-1] - t[i-1][j-1];
	}
	for(k = min(x,y);k >= 0;k--){
		for(i = 1;i+k-1 <= y;i++ ){
			for(j = 1;j+k-1 <= x;j++){
				if(t[i+k-1][j+k-1] - t[i+k-1][j] - t[i][j+k-1] + t[i-1][j-1] == 0){
					Y[c] = i;
					X[c++] = j;
				}
			}
		}
		if(c != 0){
			break;
		}
	}
	for(i = 1;i <= y;i++){
		for(j = 1;j <= x;j++){
			if(a[i][j] == 'P' && co[i][j] == 0){
				co[i][j] = ++cc;
				q.push({j,i});
				while(!q.empty()){
					pos t = q.front(); q.pop();
					visit[t.x1][t.y1] = 1;
					for(l = 0;l < 4;l++){
						int xn = t.x1+tx[l], yn = t.y1+ty[l];
						if(a[yn][xn] == 'P' && xn <= x && yn <= y && !visit[xn][yn]){
							co[yn][xn] = cc;
							q.push({xn,yn});
						}
					}
				}
			}
		}
	}

	int po[c];
	for(l = 0;l < c;l++){
		po[l] = 0;
		for(i = 0;i < 1000;i++) p[i] = 0;
		for(i = Y[l];i < Y[l]+k;i++){
			for(j = X[l];j < X[l]+k;j++){
				if(co[i][j] > 0 && p[co[i][j]] == 0){
					p[co[i][j]] = 1;
					po[l]++;
				}
			}
		}
	}
	int min = po[0];
	for(l = 0;l < c;l++){
	    if(po[l] < min) min = po[l];
	}
	cout << (k-1)*(k-1) << " " << min;
}
