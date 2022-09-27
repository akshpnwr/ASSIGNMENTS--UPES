#include <stdio.h>

void modify(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        *(arr + i) = *(arr + i) * 3;
    }
}

int main()
{

    int size = 10;
    int arr[10];

    printf("Enter elements of the array : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    modify(arr, size);

    printf("\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
