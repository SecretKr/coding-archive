#include "rumors.h"
#include <bits/stdc++.h>
using namespace std;

vector <int> ans;
int a[2005];
int b[2005];
bool u[2005];

std::vector<int> analyze_rumors(int N, int K, int Q, std::vector<int> d, std::vector<int> x, std::vector<int> j) {
  int t,i,y=0;
  int mn,ma,cal,p;
  bool f = 0;
  for(i = 1;i < N;i++){
    a[i] = (d[i]-d[i-1]-1)/K;
    if(a[i] == 0){
        if(!b[i-1]){b[i-1] = 1;b[i] = 2;}
        else b[i] = b[i-1]+1;
    }
    else y = 0;
  }
  for(i = N-1;i > 0;i--){
    if(b[i]){
        y = b[i];
        for(t = i-1;b[t] < b[t+1];t--) b[t] = y;
        i = t+1;
    }
  }
  /*for(i = 0;i < N;i++) printf("%d ",b[i]);
  cout << endl;*/
  for(t = 0;t < Q;t++){
    ans.push_back(b[x[t]]);
  }
  return ans;
}