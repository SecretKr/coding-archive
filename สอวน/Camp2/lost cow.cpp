#include<bits/stdc++.h>
using namespace std;
int n,m;

int main()
{
    int i;
    cin>> n >> m;
    int co = 0;
    if(m-n > 0){
        for(i = 0;pow(2,i) < m-n;i+=2){
            co += (pow(2,i)+pow(2,i+1))*2;
        }
        co += m-n;
    }
    else{
        co = 2;
        for(i = 1;pow(2,i) < n-m;i+=2){
            co += (pow(2,i)+pow(2,i+1))*2;
        }
        co += n-m;
    }
    cout << co;
}
