// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int n;

//     printf("Please enter a number : ");
//     scanf("%d", &n);

//     for (int i = 0; i < n; i++)
//     {

//         for (int j = 0; j < n; j++)
//         {
//             if (j < i)
//             {
//                 printf("%d", n - j);
//             }
//             else
//             {
//                 printf("%d", n - i);
//             }
//         }

//         for (int j = n - 1; j > 0; j--)
//         {
//             if (j <= i)
//             {
//                 printf("%d", n - j + 1);
//             }
//             else
//             {
//                 printf("%d", n - i);
//             }
//         }
//         printf("\n");
//     }

//     for (int i = n - 1; i >= 1; i--)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if (j < i)
//             {
//                 printf("%d", n - j + 1);
//             }
//             else
//             {
//                 printf("%d", n - i + 1);
//             }
//         }
//         for (int j = n - 1; j >= 1; j--)
//         {
//             if (j < i)
//             {
//                 printf("%d", n - j + 1);
//             }
//             else
//             {
//                 printf("%d", n - i + 1);
//             }
//         }
//         printf("\n");
//     }

//     // for (int i = 0; i < n - 1; i++)
//     // {
//     //     for (int j = 0; j < n; j++)
//     //     {
//     //         if (j < i)
//     //         {
//     //             printf("%d", n - i + 1);
//     //         }
//     //         else
//     //         {
//     //             printf("%d", n - j);
//     //         }
//     //     }
//     //     printf("\n");
//     // }

//     return 0;
// }

// // 4 4 4 4 4 4 4
// // 4 3 3 3 3 3 4
// // 4 3 2 2 2 3 4
// // 4 3 2 1 2 3 4

// // 4 3 2 2 2 3 4
// // 4 3 3 3 3 3 4
// // 4 4 4 4 4 4 4

#include <stdio.h>
int min(int s1, int s2)
{
    if (s1 < s2)
        return s1;
    else
        return s2;
}

int bc(int g, int p, int n)
{
    int s1 = 0;
    int s2 = 0;
    for (int i = 0; i < n; i++)
    {
        int ans[2];
        for (int j = 0; j < 2; ++j)
        {
            scanf("%d", &ans[j]);
            if (j % 2 == 0 && ans[j] == 1)
            {
                s1 = s1 + g;
                s2 = s2 + p;
            }
            else
            {
                if (ans[j] == 1)
                {
                    s1 = s1 + p;
                    s2 = s2 + g;
                }
            }
        }
    }
    return min(s1, s2);
}
int main()
{
    int tst, i;
    scanf("%d", &tst);
    for (i = 0; i < tst; i++)
    {
        int n, g, p, min1;
        scanf("%d %d", &g, &p);
        scanf("%d", &n);
        min1 = bc(g, p, n);
        printf("\n%d", min1);
    }
}