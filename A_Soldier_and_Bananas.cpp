#include <bits/stdc++.h>
    
using namespace std;

int main()
{
    int k, n, w, price = 0;
    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++)
    {
        price = price + (i * k);
    }
    if(price <= n){
        cout << "0" << endl;
    }
    else{
        cout << abs(n - price) << endl;
    }
    
    return 0;
}