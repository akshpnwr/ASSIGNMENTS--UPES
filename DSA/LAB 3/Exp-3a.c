#include <stdio.h>
int main()
{

    int printValue = 1;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", printValue);
            printValue++;
        }
        printf("\n");
    }

    return 0;
}
