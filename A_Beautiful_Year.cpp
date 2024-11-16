#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t;
    scanf("%d", &n);
    t = n;
    while (true)
    {
        t++;
        int a = t / 1000;
        int b = t / 100 % 10;
        int c = t / 10 % 10;
        int d = t % 10;
        // printf("%d %d %d %d\n", a, b, c, d);
        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            break;
        }
    }
    printf("%d", t);

    return 0;
}
