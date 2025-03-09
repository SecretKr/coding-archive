#include<bits/stdc++.h>
using namespace std;

int n,a[101][2];
double M,t;

double space(int x1,int y1,int x2,int y2,int x3,int y3){
    return abs(x1*y2 + x2*y3 + x3*y1 - y1*x2 - y2*x3 - y3*x1);
}

int main()
{
    cin >> n;
    int i,j,k;
    for(i = 0;i < n;i++){
        cin >> a[i][0] >> a[i][1];
    }
    for(i = 0;i < n-2;i++){
        for(j = i+1;j < n-1;j++){
            for(k = j+1;k < n;k++){
                t = space(a[i][0],a[i][1],a[j][0],a[j][1],a[k][0],a[k][1]);
                if(t > M) M = t;
            }
        }
    }
    printf("%.3lf",M/2);
}
