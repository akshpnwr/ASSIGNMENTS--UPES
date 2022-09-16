#include <stdio.h>

int swap(int n1, int n2)
{
    n1 = n1 + n2;

    n2 = n1 - n2;

    n1 = n1 - n2;

    printf("\nAfter re-swapping: n1 = %d,n2 = %d", n1, n2);
}

int main()
{

    int n1, n2;

    printf("----Swap without function----\n");

    printf("\nEnter two numbers: ");
    scanf("%d%d", &n1, &n2);

    printf("\nBefore swapping: n1 = %d,n2 = %d", n1, n2);

    n1 = n1 + n2;

    n2 = n1 - n2;

    n1 = n1 - n2;

    printf("\nAfter swapping: n1 = %d,n2 = %d", n1, n2);

    printf("\n\n----Swap using function(call by value)----\n");

    swap(n1, n2);

    return 0;
}
