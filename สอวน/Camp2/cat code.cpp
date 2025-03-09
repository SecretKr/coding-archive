#include<bits/stdc++.h>
using namespace std;
int k,M,DD,n[105];
char c[100005];
bool use[100005];
std::bitset<1000005> d[105];
std::bitset<35> m[100005];

priority_queue <int> pq;

int main()
{
    cin >> k >> M;
    int i,j,I,J;
    for(i = 0;i < k;i++){
        scanf("%s",c);
        for(j = 0;c[j] != '\0';j++){
            if(c[j] == '1') m[i][j] = 1;
        }
    }
    cin >> DD;
    for(i = 0;i < DD;i++){
        cin >> n[i];
        scanf("%s",c);
        for(j = 0;c[j] != '\0';j++){
            if(c[j] == '1') d[i][j] = 1;
        }
    }
    for(i = 0;i < DD;i++){
        for(I = 0;I < k;I++) use[I] = 0;

        for(j = 0;j <= n[i]-M;j++){
            for(I = 0;I < k;I++){
                if(!use[I]){
                bool f = 0;
                for(J = 0;J < M;J++){
                    if(d[i][j+J] != m[I][J]){
                        f = 1;
                        break;
                    }
                }
                if(!f){
                    pq.push(-I-1);
                    use[I] = 1;
                }
                }
            }
        }
        if(pq.empty()) printf("OK\n");
        else{
            while(!pq.empty()){
                printf("%d ",-pq.top());
                pq.pop();
            }
            cout << endl;
        }
    }
}
