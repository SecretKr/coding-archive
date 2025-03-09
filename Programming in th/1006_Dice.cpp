#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int a[6][6],i,j,t,n;
    char b[6][1000];

    cin >> n;
    for(i = 0;i < n;i++){
        cin >> b[i];
    }
    for(j = 0;j < n;j++){
        for(i = 1;i <= 6;i++){
            a[j][i-1] = i;
        }
    }
    for(j = 0;j < n;j++){
        for(i = 0;i < strlen(b[j]);i++){
            if(b[j][i] == 'F'){
                t = a[j][0];
                a[j][0] = a[j][4];
                a[j][4] = a[j][5];
                a[j][5] = a[j][1];
                a[j][1] = t;
            }
            if(b[j][i] == 'B'){
                t = a[j][0];
                a[j][0] = a[j][1];
                a[j][1] = a[j][5];
                a[j][5] = a[j][4];
                a[j][4] = t;
            }
            if(b[j][i] == 'L'){
                t = a[j][0];
                a[j][0] = a[j][3];
                a[j][3] = a[j][5];
                a[j][5] = a[j][2];
                a[j][2] = t;
            }
            if(b[j][i] == 'R'){
                t = a[j][0];
                a[j][0] = a[j][2];
                a[j][2] = a[j][5];
                a[j][5] = a[j][3];
                a[j][3] = t;
            }
            if(b[j][i] == 'C'){
                t = a[j][1];
                a[j][1] = a[j][3];
                a[j][3] = a[j][4];
                a[j][4] = a[j][2];
                a[j][2] = t;
            }
            if(b[j][i] == 'D'){
                t = a[j][1];
                a[j][1] = a[j][2];
                a[j][2] = a[j][4];
                a[j][4] = a[j][3];
                a[j][3] = t;
            }
        }
    }
    for(i = 0;i < n;i++){
        cout << a[i][1] << " ";
    }
}
