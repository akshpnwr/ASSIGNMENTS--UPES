#include <stdio.h>
#include <math.h>
int Pascal()
{

    // Solution - 1 - incomplete (works only till 5 rows)

    int res, remainder, spaces = 4;
    for (int i = 0; i < 5; i++)
    {

        for (int i = 0; i <= spaces; i++)
        {
            printf(" ");
        }

        res = pow(11, i);

        while (res != 0)
        {
            remainder = res % 10;
            res /= 10;
            printf("%d ", remainder);
        }
        spaces--;
        printf("\n");
    }

    // Solution-2 - unclear

    // int no_row, c = 1, blk, i, j;
    // printf("Input number of rows: ");
    // scanf("%d", &no_row);
    // for (i = 0; i < no_row; i++)
    // {
    //     // for (blk = 1; blk <= no_row - i; blk++)
    //     //     printf("  ");
    //     for (j = 0; j <= i; j++)
    //     {
    //         if (j == 0 || i == 0)
    //             c = 1;
    //         else
    //             c = c * (i - j + 1) / j;
    //         printf("%d", c);
    //     }
    //     printf("\n");
    // }

    return 0;
}
