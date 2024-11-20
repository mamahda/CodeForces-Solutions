#include <bits/stdc++.h>
    
using namespace std;

int main()
{
    string s;int x = 1;
    cin >> s;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i-1])
        {
            x++;
            if (x == 7)
            {
                cout << "YES";
                return 0;
            }
        }
        else
        {
            x = 1;
        }
        
    }
    
    cout << "NO";
    
    return 0;
}
