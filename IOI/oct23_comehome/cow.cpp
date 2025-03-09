#include<bits/stdc++.h>
using namespace std;

int n;
bool cow[50];
long long mem[50];
char cf,ct;

struct ss{
    int y,n;
};
struct s{
    int x,y,n;
};

vector <ss> v[50];
queue <s> q;

int main()
{
    cin >> n;
    int i,l,x,y;
    for(i = 0;i < n;i++){
        scanf(" %c %c %d",&cf,&ct,&l);
        if(cf >= 'a' && cf <= 'z') cf-=97;
        else{
            cf-=65;
            cow[cf] = 1;
        }
        if(ct >= 'a' && ct <= 'z') ct-=97;
        else{
            ct-=65;
            cow[ct] = 1;
        }
        v[cf].push_back({ct,l});
        v[ct].push_back({cf,l});
    }


    for(i = 0;i < 25;i++) mem[i] = 1e18;

    for(i = 0;i < v[25].size();i++){
        q.push({25,v[25][i].y,v[25][i].n});
    }
    while(!q.empty()){
        x = q.front().x; y = q.front().y;
        if(mem[y] > mem[x] + q.front().n){
            mem[y] = mem[x] + q.front().n;
            for(i = 0;i < v[y].size();i++){
                q.push({y,v[y][i].y,v[y][i].n});
            }
        }
        else q.pop();
    }


    l = 1e18;
    for(i = 0;i < 25;i++){
        if(cow[i]){
            if(mem[i] < l){
                l = mem[i];
                x = i;
            }
        }
    }
    printf("%c %d",x+65,l);
}