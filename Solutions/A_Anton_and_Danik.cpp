#include <bits/stdc++.h>
    
using namespace std;

int main()
{
    char c;
    int n, a = 0, d = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        if (c == 'A')
        {
            a++;
        }
        else if(c == 'D'){
            d++;
        }
    }
    
    if (a > d)
    {
        cout << "Anton"  << endl;
    }
    else if(a < d){
        cout << "Danik" << endl;
    }
    else{
        cout << "Friendship" << endl;
    }

    return 0;
}
