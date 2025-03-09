#include<bits/stdc++.h>
using namespace std;
int n,a[20],b[20];

long long f(int p,int A,int B,int An){
    if(p == n){
        return ((A*100-(An*A)) + (B*100-((n-An)*B)));
    }
    return min(f(p+1,A+a[p],B,An+1),f(p+1,A,B+b[p],An));
}

int main()
{
    cin >> n;
    int i;
    for(i = 0;i < n;i++) scanf("%d",&a[i]);
    for(i = 0;i < n;i++) scanf("%d",&b[i]);
    printf("%.2f",(float)f(0,0,0,0)/100);
}