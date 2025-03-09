#include<iostream>

using namespace std;

int main()
{
    int a[3],n;
    char c;
    a[0] = 1;
    a[1] = 0;
    a[2] = 0;

    c = cin.get();
    while(c != '\n'){
        if(c == 'A'){
            n = a[0];
            a[0] = a[1];
            a[1] = n;
        }
        if(c == 'B'){
            n = a[1];
            a[1] = a[2];
            a[2] = n;
        }
        if(c == 'C'){
            n = a[0];
            a[0] = a[2];
            a[2] = n;
        }
        c = cin.get();
    }
    for(int i = 0;i < 3;i++){
        if(a[i] == 1){
            cout << i+1;
        }
    }
}
