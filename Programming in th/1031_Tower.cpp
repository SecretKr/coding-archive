#include<bits/stdc++.h>
using namespace std;
int k,n,m;
int mem[10005];

vector <int> v[10000];

int b(int f,int p){
    if(mem[f]) return mem[f];
    if(p == 0) return mem[f] = f;
    if(v[f].size() == 0) return mem[f] = f;
    int i,t,x = 0;
    for(i = 0;i < v[f].size();i++){
        if(x < b(v[f][i],p-1)) x = b(v[f][i],p-1);
    }
    return mem[f] = x;
}

int main()
{
    scanf("%d%d%d",&k,&n,&m);
    int t1,t2;
    int i,j;
    for(i = 0;i < m;i++){
        cin >> t1 >> t2;
        v[t1].push_back(t2);
    }
    cout << b(1,k);
    /*for(i = n;i > 0;i--){
        for(j = 0;j < v[i].size();j++){
            if(x < b(v[f][i],p-1)) x = b(v[f][i],p-1);
        }
    }*/
}

