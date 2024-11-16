#include <iostream>

using namespace std;

int main()
{
    int n, h, sum;
    scanf("%d %d", &n, &h);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);
        if (a / h < 1)
        {
            arr[i] = 1;
        }
        else
        {
            if (a % h == 0)
            {
                arr[i] = a / h;
            }
            else
            {
                arr[i] = a / h + 1;
            }
        }
        // printf("%d\n", arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("%d", sum);

    return 0;
}
