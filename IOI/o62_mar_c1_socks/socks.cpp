#include <bits/stdc++.h>
#include "sockslib.h"
using namespace std;
int n;

vector <int> v;
bool a[1005];
int ans = 0;

void f(int x,int y){
  int i;
  v = {};
  for(i = x;i < (x+y+1)/2;i++){
    if(!a[i]) v.push_back(i);
  }
  int c = ask(v);

  if(c != (y-x+1)/2){
    f(x,(y-x+1)/2-1);
    f((y-x+1)/2,y);
  }

  for(i = x;i < (x+y+1)/2;i++){
    if(!a[i]){
      for(int j = (x+y+1)/2;j <= y;j++){
        vector <int> v2 = {i+1,j+1}; 
        if(!a[j]) if(ask(v2) == 1) {match(i+1,j+1); a[i] = a[j] = 1;}
      }
    }
  }
}

int main() {
  n = num();
  f(0,n*2-1);
  match(1,5);
    match(2,6);
    match(3,4);
}

/*
  int n;
  n = num();
  vector<int> v = {1,2,3};
  cout << ask( v ) << endl;
  match(1,2);
*/
