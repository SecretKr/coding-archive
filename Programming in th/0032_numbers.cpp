#include <iostream>

using namespace std;

int main()
{
    int n,i,j,c;
    int a[1000];

    cin >> n;
    for(i = 0;i < n;i++ ){
        cin >> a[i];
    }
    for(j = n-1;j > 0;j--){
        for(i = 0;i < j;i++ ){
            if(a[i] > a[i+1]){
                c = a[i];
                a[i] = a[i+1];
                a[i+1] = c;
            }
        }
    }
    i = 0;
    while(a[0] == 0){
        i += 1;
        if(a[i] != 0){
            c = a[i];
            a[i] = a[0];
            a[0] = c;
        }
    }
    for(i = 0;i < n;i++)
        cout << a[i];
}
