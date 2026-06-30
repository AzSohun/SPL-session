#include <stdio.h>

int main()
{

    int r, c;

    scanf("%d %d", &r, &c);

    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int count_zero = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);

            int val = arr[i][j];

            if (val == 0)
            {
                count_zero++;
            }
        }
        printf("\n");
    }

    if (count_zero == r * c)
    {
        printf("This is a zero matrix.");
    }
    else
    {
        printf("This is not a zero matrix.");
    }
}