#include "guess.h"
#include <bits/stdc++.h>
using namespace std;
vector<pair<int, char>> v;

int f(int s,int e){
  int i;
  if(e == s) return e;
  v.clear();
  for(i = s;i < (e+s+1)/2;i++){
    v.push_back({i,'R'});
  }
  char c = ask(v);
  if(c == 'R') return f(s,(e+s+1)/2-1);
  else return f((e+s+1)/2,e);
}
int f2(int s,int e){
  int i;
  if(e == s) return e;
  if(e-s == 1) return f(s,e);
  v.clear();
  for(i = s;i < (e+s+s+1)/3;i++){
    v.push_back({i,'R'});
  }
  for(i = (e+s+s+1)/3;i < (e+s+e+2)/3;i++){
    v.push_back({i,'B'});
  }

  char c = ask(v);
  if(c == 'R') return f2(s,(e+s+s+1)/3-1);
  if(c == 'B') return f2((e+s+s+1)/3,(e+s+e+2)/3-1);
  else return f2((e+s+e+2)/3,e);
}

int find_answer(int N, int K) {
  char c;
  int i;
  if(K == 1) return f(0,N-1);
  return f2(0,N-1);
}


/*int find_answer(int N, int K) {
  char c;
  int i;
  if(K == 1){
    for(i = 0;i < N;i+=2){
      c = ask({{i,'R'}});
      if(c == 'R') return i;
      if(c == 'C') return i+1;
    }
  }
  else{
    for(i = 0;i < N;i+=2){
      c = ask({{i,'R'} , {i+1,'B'}});
      if(c == 'R') return i;
      if(c == 'B') return i+1;
    }
  }
}*/