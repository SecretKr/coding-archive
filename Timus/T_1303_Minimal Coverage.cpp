#include<bits/stdc++.h>
using namespace std;
int m,i;
int t1,t2 = 1;
vector <int> v[100000];

struct range{
    int s,e;
};

bool srt(range x,range y)
{
    if(x.s != y.s)return x.s<y.s;
    return x.e<y.e;
}

int main()
{
    cin >> m;
    int x = 0;
    range a[100000];
    while(1){
        cin >> t1 >> t2;
        if(t1 == 0 && t2 == 0) break;
        if(t1 <= 0 && t2 >= m){
            a[x].s = t1;
            a[x].e = t2;
            i = max(i,t1);
            x++;
        }
    }
    sort(a,a+x,srt);
    if(x == 0) cout << "No solution";
    else{
        cout << x << endl;
        for(int j = 0;j < x;j++){
            cout << a[j].s << " " << a[j].e << endl;
        }
    }
}
