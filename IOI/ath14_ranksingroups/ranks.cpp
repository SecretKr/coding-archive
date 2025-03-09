#include<bits/stdc++.h>
using namespace std;
int t,N,L,K;
int n[100005],temp[100005],g[100005];
map <int,int> a[100005];

queue <int> q;

int group(int j)
{
    if(g[j] == j) return j;
    return group(g[j]);
}

int main()
{
    cin >> t;
    int x,y,j;
    for(int T = 0;T < t;T++){
        cin >> N >> L;
        for(int i = 1;i <= N;i++){
            n[i] = 1;
            a[i][0] = i;
            g[i] = i;
        }
        for(int i = 0;i < L;i++){
            scanf("%d",&K);
            if(K == 1){ //merge
                scanf("%d%d",&y,&x);
                y = group(y);
                for(j = 0;j < n[x];j++) q.push(a[x][j]);
                int p1 = 0,p2 = 0;
                while(p1 < n[y] && p2 < n[x]){
                    if(a[y][p1] < q.front()){
                        a[x][p1+p2] = q.front();
                        p2++;
                    }
                    else{
                        a[x][p1+p2] = a[y][p1];
                        p1++;
                    }
                    q.pop();
                }
                if(p1 < n[y]) for(p1 = p1;p1 < n[y];p1++) a[x][p1+p2] = a[y][p1];
                if(p2 < n[x]) for(p2 = p2;p2 < n[y];p2++){a[x][p1+p2] = q.front(); q.pop();}
                n[x] = p1+p2;
                g[y] = x;
            }
            else{
                scanf("%d",&x);
                y = group(x);
                for(j = 0;a[y][j] != x;j++);
                printf("%d\n",j+1);
            }
        }/*
        cout << "debug" << endl;
        for(int ii = 1;ii <= N;ii++){
            for(int jj = 0;jj < n[ii];jj++){
                printf("%d ",a[ii][jj]);
            }
            cout << endl;
        }*/
    }
}