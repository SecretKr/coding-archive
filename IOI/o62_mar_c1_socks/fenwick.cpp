#include <bits/stdc++.h>

using namespace std;

#define LSB(x) x&(-x)
#define SIZE 1000000

int a[SIZE];

void update(int i, int v)
{
    for(;i<SIZE; i+=LSB(i)) a[i] += v;
}

int prefixsum(int i)
{
    int s=0;
    for(;i>0; i-=LSB(i)) s += a[i];
    return s;
}

int main()
{
    update(3, 5);
    update(4, 2);
    update(6, -1);
    for(int i=1; i<8; i++)
    {
        cout << i << ' ' << prefixsum(i) << '\n';
    }
}
