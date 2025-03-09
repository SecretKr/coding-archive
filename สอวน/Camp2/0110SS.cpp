#include<bits/stdc++.h>
using namespace std;
int n;
long long mem[80][2];

long long fn(int i,bool z){
    if(mem[i][z]) return mem[i][z];
    if(i == n) return mem[i][z] = 1;
    if(z == 0) return mem[i][z] = fn(i+1,1);
    return mem[i][z] = fn(i+1,1) + fn(i+1,0);
}

int main()
{
    cin >> n;
    cout << fn(0,1);
}
