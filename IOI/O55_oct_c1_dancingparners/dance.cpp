#include<bits/stdc++.h>
using namespace std;
int n;
struct s{
    int h,a;
};

vector <s> a,b;

int main()
{
    cin >> n;
    int x,y,i;
    for(i = 0;i < n;i++){
        scanf("%d %d",&x,&y);
        a.push_back({x,y});
    }
    for(i = 0;i < n;i++){
        scanf("%d %d",&x,&y);
        b.push_back({x,y});
    }
    for(i = 0;i < n;i++){
        int m = -1e9,p;
        for(int j = 0;j < n;j++){
            m = max(m,a[i].a+b[j].a-abs(a[i].h-b[j].h));
        }
        cout << m << endl;
    }
}