#include<iostream>

using namespace std;

int main()
{
    int i,j,n,t[3];
    cin >> n;
    char d[n],a[3] = {'A','B','C'},b[4] = {'B','A','B','C'},c[6] = {'C','C','A','A','B','B'};
    cin >> d;

    for(i = 0;i < 3;i++){
        t[i] = 0;
    }

    for(i = 0;i < n;i++){
        j += 1;
        if(i%3 == 0)
            j = 0;
        if(d[i] == a[j]){
            t[0] += 1;
        }
    }

    for(i = 0;i < n;i++){
        j += 1;
        if(i%4 == 0)
            j = 0;
        if(d[i] == b[j]){
            t[1] += 1;
        }
    }

    for(i = 0;i < n;i++){
        j += 1;
        if(i%6 == 0)
            j = 0;
        if(d[i] == c[j]){
            t[2] += 1;
        }
    }
    j = 0;
    for(i = 0;i < 3;i++){
        if(t[i] > j){
            j = t[i];
        }
    }
    cout << j << endl;
    for(i = 0;i < 3;i++){
        if(t[i] == j){
            if(i == 0) cout << "Adrian" << endl;
            if(i == 1) cout << "Bruno" << endl;
            if(i == 2) cout << "Goran" << endl;
        }
    }
}
