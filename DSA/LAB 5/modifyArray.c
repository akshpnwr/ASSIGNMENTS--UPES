#include <stdio.h>

void modify(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        *(arr + i) = *(arr + i) * 3;
    }
}

int modifyArray()
{

    int size = 10;
    int arr[10];

    printf("Enter 10 elements of the array : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    modify(arr, size);

    printf("\n");
    printf("Elements after multiplying by 3 : \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
