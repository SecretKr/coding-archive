#include<bits/stdc++.h>
using namespace std;
int a,b,n;

int main()
{
    cin >> n;
    b = a = n;
    int i,t,aa = 0,bb = 0;
    for(i = 0;i < 2*n;i++){
        cin >> t;
        if(t%2 == 0){
            if(aa == 2){
                b -= 3;
            }
            else{
                b--;
                aa++;
            }
            bb = 0;
        }
        else{
            if(bb == 2){
                a -= 3;
            }
            else{
                a--;
                bb++;
            }
            aa = 0;
        }
        if(a <= 0){
            cout << "1" << endl << t;
            return 0;
        }
        if(b <= 0){
            cout << "0" << endl << t;
            return 0;
        }
    }
}
