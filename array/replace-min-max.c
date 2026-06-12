#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int min = a[0];
    int min_idx = 0;

    int max = 0;
    int max_idx = 0;

    for (int i = 0; i < n; i++)
    {

        if (min > a[i])
        {
            min = a[i];
            min_idx = i;
        }
        else if (max < a[i])
        {
            max = a[i];
            max_idx = i;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (i == min_idx)
        {
            a[i] = max;
        }
        else if (i == max_idx)
        {
            a[i] = min;
        }

        printf("%d ", a[i]);
    }
}