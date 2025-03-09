#include<bits/stdc++.h>
using namespace std;

vector <int> a;

int main()
{
    int n,i,j,p;
    cin >> n;
    for(i = 0;i < n;i++){
        cin >> p;
        a.push_back(p);
        if(a[a.size()-2] == 0){
            int c = a.size()-2,co = 0;
            for(j = 0;j <= p+co;j++){
                if(a[c] == j){ co++; c--; if(c < 0) break;}
            }
            for(j = a.size()-1;j >= a.size()-co-1 && j >= 0;j--){
                a[j] = p++;
            }
        }
        else{
            for(j = a.size()-1;j > 0;j--){
                if(a[j] >= a[j-1]){
                    a[j] = a[j-1]-1;
                    if(p-1 > a[j-1]) a[j-1] = --p;
                }
                else break;
            }
        }
    }
    for(i = 0;i < a.size();i++){
        cout << a[i] << endl;
    }
}