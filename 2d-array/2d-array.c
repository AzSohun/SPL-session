#include <stdio.h>

int main()
{

    // int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // int arr_2d[3][4] = {

    //     {1, 2, 3, 4},
    //     {5, 6, 7, 8},
    //     {9, 0, 1, 2}

    // };

    int arr2d[3][3];

    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            scanf("%d", &arr2d[r][c]);
        }
    }

    int sum = 0;

    for (int r = 0; r < 3; ++r)
    {
        for (int c = 0; c < 3; ++c)
        {
            // printf("%d ", arr2d[r][c]);

            sum += arr2d[r][c];
            printf("%d ", sum);
        }
        printf("\n");
        sum = 0;
    }

    for (int c = 0; c < 3; c++)
    {
        for (int r = 0; r < 3; r++)
        {
            // printf("%d ", arr2d[r][c]);
            sum += arr2d[r][c];
            printf("%d ", sum);
        }
        printf("\n");
        sum = 0;
    }
}