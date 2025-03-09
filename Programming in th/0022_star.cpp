#include <iostream>

using namespace std;

int main()
{
    int a, i, j, x, y;
    cin >> a;
    int c = a;
    if(a%2 == 0){
        c = a-1;
        x = a/2-1;
    }
    else
        x = (a-1)/2;
    char b[c][a];
    for(i = 0;i < c;i++){
        for(j = 0;j < a;j++){
            b[i][j] = '-';
        }
    }

    y = x;
    j = x;

    for(i = 0;i <= j;i++){
        b[x][i] = '*';
        b[y][i] = '*';
        x -= 1;
        y += 1;
    }
    x = j;
    y = j;
    for(i = a-1;i > j;i--){
        b[x][i] = '*';
        b[y][i] = '*';
        x -= 1;
        y += 1;
    }

    for(j = 0;j < a;j++){
        for(i = 0;i < c;i++){
            cout << b[i][j];
        }
        cout << endl;
    }
}
