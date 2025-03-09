#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[305][305];
bool v[301][301][5],f;
bool tx[] = {0,1,0,-1},ty[] = {-1,0,1,0};
int Tx,Ty,TD;

vector <int> ans;

int move(){
    int c = 0;
    while(Tx >= 0 && Ty >= 0 && Tx < m && Ty < n){
        if(TD == 0){
            if(a[Tx][Ty] == 13) {Tx -= 1;TD = 3;}
            else{
            if(a[Tx][Ty] == 14) {Tx += 1;TD = 1;}
            else{
            if(a[Tx][Ty] == 21 || 31) {Ty -= 1;}
            }}
            c++;
        }
        else{
        if(TD == 1){
            if(a[Tx][Ty] == 11) {Ty -= 1;TD = 0;}
            else{
            if(a[Tx][Ty] == 13) {Ty += 1;TD = 2;}
            else{
            if(a[Tx][Ty] == 22 || 31) {Tx += 1;}
            }}
            c++;
        }
        else{
        if(TD == 2){
            if(a[Tx][Ty] == 11) {Tx -= 1;TD = 3;}
            else{
            if(a[Tx][Ty] == 12) {Tx += 1;TD = 1;}
            else{
            if(a[Tx][Ty] == 21 || 31) {Ty += 1;}
            }}
            c++;
        }
        else{
        if(TD == 3){
            if(a[Tx][Ty] == 12) {Ty -= 1;TD = 0;}
            else{
            if(a[Tx][Ty] == 14) {Ty += 1;TD = 2;}
            else{
            if(a[Tx][Ty] == 22 || 31) {Tx -= 1;}
            }}
            c++;
        }}}}
    }
    if(TD == 0) {if(v[Tx][Ty+1][TD%2]) f = 1; v[Tx][Ty+1][TD%2] = 1;}
    if(TD == 1) {if(v[Tx-1][Ty][TD%2]) f = 1;v[Tx-1][Ty][TD%2] = 1;}
    if(TD == 2) {if(v[Tx][Ty-1][TD%2]) f = 1;v[Tx][Ty-1][TD%2] = 1;}
    if(TD == 3) {if(v[Tx+1][Ty][TD%2]) f = 1;v[Tx+1][Ty][TD%2] = 1;}
    return c;
}

int main()
{///////// y // x
    cin >> n >> m;
    int i,j;
    for(i = 0;i < n;i++){
        for(j = 0;j < m;j++){
            scanf("%d",&a[j][i]);
        }
    }
    for(i = 0;i < m;i++){
        if(a[i][0] != 0 && a[i][0] != 13 && a[i][0] != 14 && a[i][0] != 22){
            Tx = i; Ty = 0; TD = 2;
            v[Tx][Ty][TD%2] = 1;
            f = 0;
            int c = move();
            if(!f) ans.push_back(c);
        }
        if(a[i][n-1] != 0 && a[i][n-1] != 11 && a[i][n-1] != 12 && a[i][n-1] != 22){
            Tx = i; Ty = n-1; TD = 0;
            v[Tx][Ty][TD%2] = 1;
            f = 0;
            int c = move();
            if(!f) ans.push_back(c);
        }
    }
    for(i = 0;i < n;i++){
        if(a[0][i] != 0 && a[0][i] != 12 && a[0][i] != 14 && a[0][i] != 21){
            Tx = 0; Ty = i; TD = 1;
            v[Tx][Ty][TD%2] = 1;
            f = 0;
            int c = move();
            if(!f) ans.push_back(c);
        }
        if(a[m-1][i] != 0 && a[m-1][i] != 11 && a[m-1][i] != 13 && a[m-1][i] != 21){
            Tx = m-1; Ty = i; TD = 3;
            v[Tx][Ty][TD%2] = 1;
            f = 0;
            int c = move();
            if(!f) ans.push_back(c);
        }
    }
    cout << ans.size() << endl;
    for(i = 0;i < ans.size();i++){
        cout << ans[i] << " ";
    }
}
