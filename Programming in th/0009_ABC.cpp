#include<iostream>

using namespace std;

int main()
{
    int i,a[3],n;
    char b[4];

    for(i = 0;i < 3;i++){
        cin >> a[i];
    }
    if(a[0] > a[1]){
        n = a[0];
        a[0] = a[1];
        a[1] = n;
    }
    if(a[1] > a[2]){
        n = a[1];
        a[1] = a[2];
        a[2] = n;
    }
    if(a[0] > a[1]){
        n = a[0];
        a[0] = a[1];
        a[1] = n;
    }
    cin >> b;
    for(i = 0;i < 3;i++){
        if(b[i] == 'A'){
            cout << a[0];
        }
        if(b[i] == 'B'){
            cout << a[1];
        }
        if(b[i] == 'C'){
            cout << a[2];
        cout << " ";
    }
}
