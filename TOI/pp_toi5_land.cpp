#include<iostream>
using namespace std;

bool check[5][5];
double val[5][5];
int n,m;

void add(int x, int y, double v){
    for(int i=x-1;i<=x+1;i++){
        for(int j=y-1;j<=y+1;j++){
            if(!check[i][j]) val[i][j] += v;
        }
    }
}

double f(int remain, double total){
    if(remain == 0) return total;
    double mi = 1e9;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(check[i][j] == false){
                check[i][j] = true;
                add(i,j,0.1*val[i][j]);
                mi = min(mi, f(remain-1, total+val[i][j]));
                add(i,j,-0.1*val[i][j]);
                check[i][j] = false;
            }
        }
    }
    return mi;
}

int main()
{
    cin >> n >> m;
    for(int i=1;i<=n;i++) for(int j=1;j<=m;j++) cin >> val[i][j];
    printf("%.2lf",f(m*n, 0));
}
