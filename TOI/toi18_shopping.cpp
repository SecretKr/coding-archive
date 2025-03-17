#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n, m, a, b;
int point[500005];
vector<int> price, price_i;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    price.push_back(0);
    price_i.push_back(0);

    cin >> n >> m;
    int i, previous_price = 0;
    for(i = 1;i <= n;i++){
        cin >> a;
        if(a >= 0){
            point[i] = point[i-1] + a;
        }
        else{
            point[i] = point[i-1];
            price.push_back(previous_price-a);
            price_i.push_back(i);
            previous_price -= a;
        }
    }

    for(i = 0;i < m;i++){
        cin >> a >> b;
        auto it = upper_bound(price_i.begin(), price_i.end(), a);
        if (it != price_i.begin()) it--;
        it = lower_bound(price.begin(), price.end(), b + price[it-price_i.begin()]);
        if(it == price.end()) cout << point[n] - point[a] << "\n";
        else cout << point[price_i[it-price.begin()]] - point[a] << "\n";
    }
}