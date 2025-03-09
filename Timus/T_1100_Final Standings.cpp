#include<bits/stdc++.h>
using namespace std;

vector <int> q[150000];
int n,i,m,j;

int main()
{
	cin >> n;
	int t1,t2;
	for(i = 0;i < n;i++){
		cin >> t1 >> t2;
		q[t2].push_back(t1);
		if(t2 > m) m = t2;
	}
	for(i = m;i >= 0;i--){
		for(j = 0;j < q[i].size();j++){
			cout << q[i][j] << " " << i << endl;
		}
	}
}
