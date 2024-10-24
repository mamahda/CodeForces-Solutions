#include <bits/stdc++.h>
using namespace std;

long long int a, c, cek;

int main()
{
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        cin >> c;
        if (sqrt(c) * sqrt(c) == c)
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
