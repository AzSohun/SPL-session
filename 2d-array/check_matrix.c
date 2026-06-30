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

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    if (r == 1)
    {
        printf("This is a row matrix.\n");
    }
    else if (c == 1)
    {
        printf("This is a column matrix.\n");
    }
    else if (r == c)
    {
        printf("This is a square matrix.\n");
    }
}