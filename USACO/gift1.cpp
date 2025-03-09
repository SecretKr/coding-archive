/*
ID: teerapo1
PROG: gift1
LANG: C++
*/

#include<bits/stdc++.h>
using namespace std;


int main()
{
    ofstream fout ("gift1.out");
    ifstream fin ("gift1.in");
    int i,n,v,g;
    map<string,int> p;
    fin >> n;
    string t[12];
    char name[20],giver[20];
    for(i = 0;i < n;i++)
    {
        fin >> name;
        p[name] = 0;
        t[i] = name;
    }
    fin >> giver;
    fin >> v >> g;
    while(v != 0 && g != 0){
        for(i = 0;i < g;i++){
            fin >> name;
            p[name] += v/g;
            p[giver] -= v/g;
        }
        fin >> giver;
        fin >> v >> g;
    }
    for(i = 0;i < n;i++)
    {
        fout << t[i] << " " << p[t[i]] << endl;
    }
    return 0;
}
