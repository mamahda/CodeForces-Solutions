#include <iostream>

using namespace std;

int main()
{
    int n, t;
    scanf("%d %d", &n, &t);
    string s;
    cin >> s;
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // printf("%c\n", s[j]);
            if (s[j] == 'B' && s[j + 1] == 'G')
            {
                // printf("swapped %d\n", j);
                s[j] = 'G';
                s[j + 1] = 'B';
                j++;
            }
        }
    }
    cout << s;

    return 0;
}
