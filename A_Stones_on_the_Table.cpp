#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans = 0;
    cin >> n;
    char c[n];
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
        if (i >= 1)
        {
            if (c[i] == c[i-1])
            {
                ans++;
            }
            
        }
        
    }
    cout << ans;
    
    return 0;
}
