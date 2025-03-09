#include<bits/stdc++.h>
#include<fstream>
using namespace std;
#define size 1000000
int n;
bool a[size];
int b[size];

int main()
{
    ofstream fout;
    fout.open("out.txt");
    cin >> n;
    int t = n;
    int i,j;
    for(i = 3;i <= n;i+=2){
        a[i+1] = 1;
        if(!a[i]) for(j = i*2;j <= n;j+=i){
            a[j] = 1;
        }
    }
    a[4] = 0;
    a[6] = 0;
    while(n != 1){
        for(i = 2;i <= n;i++) if(!a[i]){
            if(n%i == 0){
                n /= i;
                b[i]++;
                break;
            }
        }
    }
    /*for(i = 0;i < t;i++){
        if(b[i]) printf("%d %d\n",i,b[i]);
    }*/
    if(b[2] >= 2){
        b[4] += b[2]/2;
        b[2] = b[2]%2;
    }
    while(b[2] && b[3]){
        b[2]--;
        b[3]--;
        b[6]++;
    }
    if(b[4]) for(i = 0;i < b[4];i++) fout << "ACVVVV";
    if(b[6]) for(i = 0;i < b[6];i++) fout << "ACVVVVVV";
    b[4] = 0; b[6] = 0;
    for(i = 2;i <= t;i++) for(int x=0;x < b[i];x++){
        fout << "AC";
        for(j = 0;j < i;j++) fout << "V";
    }
}
/*4
acvvacvv
acvvvv

6
acvvvacvv
acvvvvvv

12
acvvvvvvacvv
acvvvvacvvv

4*9

*/