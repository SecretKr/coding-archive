/*
ID: teerapo1
PROG: ride
LANG: C++
*/

#include<bits/stdc++.h>
using namespace std;
char a[10],b[10];

int main()
{
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");/*
    scanf("%s",a);
    scanf("%s",b);*/
    fin >> a >> b;
    int n = strlen(a);
    int m = strlen(b);
    long long x = 1,y = 1;
    for(int i = 0;i < n;i++){
        x *= a[i]-64;
    }
    for(int i = 0;i < m;i++){
        y *= b[i]-64;
    }
    if(x%47 == y%47) fout << "GO" << endl;
    else fout << "STAY" << endl;
    return 0;
}
