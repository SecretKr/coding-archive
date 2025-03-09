#include<bits/stdc++.h>
using namespace std;
int k,A,B;
bool s[210];

int fn(int p,int a,int b){
    if(a == k || b == k){
        for(int i = 0;i < p;i++){
            if(s[i] == 0) cout << "L ";
            if(s[i] == 1) cout << "W ";
        }
        cout << endl;
        return 0;
    }
    s[p] = 1;
    fn(p+1,a+1,b);
    s[p] = 0;
    fn(p+1,a,b+1);
}

int main()
{
    cin >> k >> A >> B;
    fn(0,A,B);
}
