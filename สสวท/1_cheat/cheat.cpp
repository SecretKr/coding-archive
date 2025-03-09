#include "cheat.h"
#include "bits/stdc++.h"
using namespace std;
int a[200005];
int v[200005];
int t = 1;
bool fa = 1;

int ca(int x){
  int ma = 0;
  if(a[x] == x) return 0;
  return v[x] + ca(a[x]);
}

int f(int x)
{
  if(a[x] == x) return x;
  return f(a[x]);
}

void cheat(int p1, int p2)
{
  if(fa){
    for(int i = 1;i < 200000;i++) a[i] = i;
    fa = 0;
  }
  if(f(p1) != f(p2)){
    if(a[p1] == p1){
      int tem1 = f(p1);
      int tem2 = f(p2);
      a[tem1] = tem2;
      v[tem1] = t;
    }
    else{
      int tem1 = f(p1);
      int tem2 = f(p2);
      a[tem2] = tem1;
      v[tem2] = t;
    }
  }
  t++;
}

int investigate(int p1, int p2)
{
  if(f(p1) != f(p2)) return -1;
  return max(ca(p1),ca(p2));
}
