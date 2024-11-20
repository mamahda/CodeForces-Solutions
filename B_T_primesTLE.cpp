#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll int a, c, cek;

bool prima(ll a)
{
    for (ll i = 2; i <= trunc(sqrt(a)); i++)
    {
        if (a % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        cin >> c;
        if ((ll)sqrt(c) * (ll)sqrt(c) == c && prima((ll)sqrt(c)))
        {
            if (c != 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
