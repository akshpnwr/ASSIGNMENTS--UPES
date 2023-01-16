#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("\nUsing malloc\n");
    int *n1 = malloc(sizeof(int));
    *n1 = 10;
    printf("\nSize : %d", sizeof(n1));
    printf("\nMemory allocated value %d", *n1);
    printf("\nMemory allocated address %d", n1);

    printf("\n\nUsing calloc\n");

    int *n2 = calloc(1, sizeof(int));
    *n2 = 20;
    printf("\nSize : %d", sizeof(n2));
    printf("\nMemory allocated value %d", *n2);
    printf("\nMemory allocated address %d", n2);

    printf("\n\nUsing realloc\n");

    n2 = realloc(n1, 4 * sizeof(int));
    *n2 = 15;
    printf("\nSize : %d", sizeof(n2));
    printf("\nMemory allocated value %d", *n2);
    printf("\nMemory allocated address %d", n2);

    free(n1);
    free(n2);
    free(n2);

    return 0;
}
