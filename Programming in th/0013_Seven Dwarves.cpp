#include<iostream>

using namespace std;

int main()
{
    int i, j, a[9], b = 0;

    for(i = 0;i < 9;i++){
        cin >> a[i];
        b += a[i];
    }

    for(j = 0;j < 8;j++){
        for(i = j+1;i < 9;i++){
            if(b-a[j]-a[i] == 100){
                a[j] = 0;
                a[i] = 0;
            }
        }
    }

    for(i = 0;i < 9;i++){
        if(a[i] != 0){
            cout << a[i] << endl;
        }
    }
}
