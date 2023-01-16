#include <stdio.h>

int fibonnaci(int num1, int num2, int count)
{

    if (count == 0)
    {
        return 0;
    }

    if (num1 == 0)
        printf("%d", num1);

    printf(" %d", num2);

    return fibonnaci(num2, num1 + num2, count - 1);
}

int main()
{

    int limit;

    printf("Enter the limit of the fibonacci series: ");
    scanf("%d", &limit);

    fibonnaci(0, 1, limit);

    return 0;
}
