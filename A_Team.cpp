#include <bits/stdc++.h>
    
using namespace std;

int main()
{
    int n, ans;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp = 0, x;
        for (int j = 0; j < 3; j++)
        {
            cin >> x;
            if (x == 1)
            {
                temp++;
            }
            
        }
        if (temp >= 2)
        {
            ans++;
        }
        
    }
    cout << ans;
    
    return 0;
}
