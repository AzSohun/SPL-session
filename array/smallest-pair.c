#include <stdio.h>
#include <limits.h>

int main()
{

    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);

        int a[n];

        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
        }

        int _i = 1;
        int _j = 2;
        int smallest_pair = INT_MAX;

        for (int i = _i; i <= n - 1; i++)
        {
            for (int j = _j; j <= n; j++)
            {
                int sum = a[i] + a[j] + j - i;

                if (smallest_pair >= sum)
                {
                    smallest_pair = sum;
                }

                printf("%d + %d + %d - %d = %d\n", a[i], a[j], j, i, sum);
            }
            _j++;
        }

        printf("%d\n", smallest_pair);
    }
}