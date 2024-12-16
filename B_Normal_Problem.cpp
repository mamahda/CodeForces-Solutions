#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    string a[t], b[t];
    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
        b[i] = a[i];
        reverse(b[i].begin(), b[i].end());
        for (int j = 0; j < a[i].length(); j++)
        {
            switch (b[i][j])
            {
            case 'p':
                b[i][j] = 'q';
                break;
            case 'q':
                b[i][j] = 'p';
                break;
            case 'w':
                b[i][j] = 'w';
                break;

            default:
                break;
            }
        }
    }
    for (int i = 0; i < t; i++)
    {
        cout << b[i] << endl;
    }

    return 0;
}
