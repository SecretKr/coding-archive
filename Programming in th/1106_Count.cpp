#include<bits/stdc++.h>
using namespace std;

int n,k,c = 1,i,j,x;
bool a[200001];

int main()
{
    cin >> n >> k;
    for(i = 0;i < n-1;i++){
        j = 0;
        while(j < k){
            c %= n;
            if(a[c] == false){
                j++;
            }
            c++;
        }
        a[c-1] = true;
        x++;
        if(c == 1) k = n%(n-x);
        else {
            if((c-1)%(n-x) == 0) k = c-1;
            else k = (c-1)%(n-x);

        }
    }
    if(a[0] == 0) cout << n;
    else{
        for(i = 1;i < n;i++){
            if(a[i] == false){
                cout << i;
                break;
            }
        }
    }
}
