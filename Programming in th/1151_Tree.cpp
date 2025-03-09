#include<bits/stdc++.h>
using namespace std;

int n;
int a[200005];
int mem[200005];

int f(int x){
  if(mem[x]) return mem[x];
  int ma = 0;
  for(int i = x+1;i < n;i++){
    if(a[i] > a[x]){
      ma = max(ma, f(i));
    }
  }
  return mem[x] = 1+ma;
}

int main()
{
  cin >> n;
  for(int i = 0;i < n;i++){
    scanf("%d", &a[i]);
  }
  int ma = 0;
  for(int i = 0;i < n;i++){
    ma = max(ma, f(i));
  }
  cout << ma;
}
