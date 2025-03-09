#include<bits/stdc++.h>
using namespace std;

int n,m;
bool o[10005];

struct no{
    int id;
    int s;
};
vector <no> v[10005];

int main()
{
    cin >> n>>m;
    int i;
    int A,L,S;
    int cou=0;
    for(i = 0;i<n;i++){
        cin >> A >> L >> S;
        v[L].push_back({A,S});
    }
    int j=0;
    while(cou<m){
        int sp=0,I=n+1;
        for(i = 0;i<m;i++){
            if(v[i].size()>j){
                if(sp<v[i][j].s){
                    sp = v[i][j].s;
                    if(v[i][j].id<I) I=v[i][j].id;
                }
            }
            else if(!o[i]){
                o[i]=1;
                cou++;
            }
        }
        j++;
        if(I!=n+1) cout<<I<<endl;
    }

}
