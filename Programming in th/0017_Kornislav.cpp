#include<iostream>

using namespace std;

int main()
{
    int a[4],t,b = 3;
    for(int i = 0;i < 4;i++)
        cin >> a[i];

    for(int j = 0;j < 3;j++){
        for(int i = 0;i < b;i++){
            if(a[i] > a[i+1]){
                t = a[i];
                a[i] = a[i+1];
                a[i+1] = t;
            }
        }
        b -= 1;
    }

    cout << a[0]*a[2];
}
