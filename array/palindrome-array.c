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

    int i = 0;
    int j = n - 1;

    int flag = 1;

    while (i <= j)
    {
        if (a[i] != a[j])
        {
            flag = 0;
            printf("NO");
            break;
        }
        i++;
        j--;
    }

    if (flag)
        printf("YES");

    return 0;
}

// #include <stdio.h>

// int main()
// {

//     int n;

//     scanf("%d", &n);

//     int a[n];

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     int i = 0;
//     int j = n - 1;

//     int flag = 0;

//     while (i <= j)
//     {
//         if (a[i] == a[j])
//         {
//             flag = 1;
//         }
//         else
//         {
//             flag = 0;
//             break;
//         }

//         i++;
//         j--;
//     }

//     if (flag)
//     {
//         printf("YES");
//     }
//     else
//     {
//         printf("NO");
//     }

//     return 0;
// }