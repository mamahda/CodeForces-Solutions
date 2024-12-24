#include <iostream>

using namespace std;

int main()
{
    int n;
    bool swap;
    scanf("%d", &n);
    int soldier[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", soldier[i]);
    }
    do
    {
        swap = 0;
        bool notSorted = 0;
        for (int i = 1; i < n; i++)
        {
            if (soldier[i - 1] > soldier[i])
            {
                notSorted = 1;
            }
        }

    } while (swap);

    return 0;
}
