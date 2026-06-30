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
    int count_scalar = 0;
    if (r == c)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {

                if (i + j == r - 1 && arr[i][j] != 0 && arr[i][j] != 1)
                {
                    if (i == 0)
                    {
                        count_scalar++;
                    }
                    else if (i > 0 && arr[i - 1][j + 1] == arr[i][j])
                    {
                        count_scalar++;
                    }
                }
                else
                {
                    if (arr[i][j] == 0)
                    {
                        count_zero++;
                    }
                }
            }
            printf("\n");
        }
    }

    if (count_scalar == r && count_zero == (r * c) - r)
    {
        printf("Secondary Scalar Matrix\n");
    }
    else
    {
        printf("Not a Secondary Scalar Matrix\n");
    }
}