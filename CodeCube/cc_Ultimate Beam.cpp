#include<bits/stdc++.h>
using namespace std;

int r,c,n;
int a[200005];
int b[200005];
bool e[200005];

int f(int s, int x){
  if(x > c) return 0;
  if(s < 1 || s > r) return 1e9;
  if(e[x]){
    if(s<=b[x] && s>=a[x]){
      return min(b[x]+1-s+ f(b[x]+1,x+2) , s-a[x]+1+ f(a[x]-1,x+2));
    }
  }
  return f(s,x+2);
}

int main()
{
  int t,s;
  
  cin >> r >> c >> n;
  for(int i = 0;i < n;i++){
    scanf("%d",&t);
    scanf("%d%d",&a[t],&b[t]);
    e[t] = 1;
  }
  cin >> s;

  int mi = 1e9;
  for(int i = 2;i <= c;i+=2){
    if(e[i]){
      e[i] = 0;
      mi = min(mi, f(s,2));
      e[i] = 1;
    }
  }
  if(mi == 1e9) mi = f(s,2);
  cout << mi+c-1;
}
