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

    int count_diagonal = 0;
    int count_zero = 0;

    if (r == c)
    {
        for (int i = 0; i < r; i++)
        {

            for (int j = 0; j < c; j++)
            {

                if (i == j && arr[i][j] != 0)
                {
                    count_diagonal++;
                }
                else
                {
                    if (arr[i][j] == 0)
                    {
                        count_zero++;
                    }
                }
            }
        }
    }

    printf("\n");

    if (count_diagonal == r && count_zero == (r * c) - r)
    {
        printf("Diagonal Matrix");
    }
    else
    {
        printf("Not Diagonal Matrix");
    }
}