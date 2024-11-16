#include <iostream>

using namespace std;

int main()
{
    bool easy = true;
    int n, a;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if (a == 1)
        {
            easy = false;
        }
    }
    if (easy)
    {
        printf("EASY");
    }
    else
    {
        printf("HARD");
    }

    return 0;
}
