#include <bits/stdc++.h>
    
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (auto& x : s) { 
        x = tolower(x); 
    } 
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'a' || s[i] == 'i' || s[i] == 'u' || s[i] == 'e' || s[i] == 'o' || s[i] == 'y'){
            continue;
        }
        cout << "." << s[i];
    }
    

    
    return 0;
}
