#include "rumors.h"
#include <bits/stdc++.h>
using namespace std;

vector <int> ans;
int a[2005];
bool u[2005];

std::vector<int> analyze_rumors(int N, int K, int Q, std::vector<int> d, std::vector<int> x, std::vector<int> j) {
  int t,i,y;
  int mn,ma,cal,p;
  bool f = 0;
  for(i = 1;i < N;i++){
    a[i] = (d[i]-d[i-1]-1)/K;
  }
  for(t = 0;t < Q;t++){
    ma = 1; mn = 1;
    for(i = x[t];i > 0;i--){
      if(j[t] >= a[i]){
        j[t] -= a[i];
        mn++;
      }
      else break;
    }
    ma = max(ma,mn);
    i++;
    
    y = x[t]+1;
    while(1){
      if(y < N){
        while(j[t] >= a[y]){
          j[t] -= a[y];
          mn++;
          y++;
          if(y >= N) break;
        }
      }
      ma = max(ma,mn);
      if(i <= x[t]){
        j[t] += a[i];
        i++;
        mn--;
      }
      else break;
    }
    ans.push_back(ma);
  }
  return ans;
}