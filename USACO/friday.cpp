/*
ID: teerapo1
PROG: friday
LANG: C++
*/

#include<bits/stdc++.h>
using namespace std;
int n;
int a[10];
int m[] = {31,28,31,30,31,30,31,31,30,31,30,31};

int main()
{
    ofstream fout ("friday.out");
    ifstream fin ("friday.in");
    fin >> n;
    int i,j,day,t = 2;
    for(i = 1900;i < 1900+n;i++){
        if((i%100 == 0 && i%400 != 0) || i%4 != 0){
            m[1] = 28;
        }
        else{
            m[1] = 29;
        }
        for(int mon = 0;mon < 12;mon++){
            a[(t+12)%7]++;
            t = (t+m[mon])%7;
        }
    }
    for(i = 0;i < 7;i++){
        if(i != 6) fout << a[i] << " ";
        else fout << a[6] << endl;
    }
}
