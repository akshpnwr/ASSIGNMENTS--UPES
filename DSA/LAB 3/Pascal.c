#include <stdio.h>
#include <math.h>
int Pascal()
{

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

    return 0;
}
