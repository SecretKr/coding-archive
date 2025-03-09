#include<iostream>

using namespace std;

int main()
{
    int a,b,i,j,h,s;
    cin >> a >> b;
    char c[b][a];

    for(i = 0;i < b;i++){
        cin >> c[i];
    }
    s = b-1;

    for(i = 0;i < b-1;i++){
        h = 0;
        for(j = 0;j < a;j++){
            if(c[i][j] == c[i+1][j])
                h += 1;
        }
        if(h < 2){
            s = i;
            break;
        }
    }
    for(i = 0;i < a;i++){
        cout << c[s][i];
    }
}
