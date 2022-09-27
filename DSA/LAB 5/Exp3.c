#include <stdio.h>
int main()
{

    int size;
    printf("Enter size of the array : ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter elements of the array : ");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int *ptr = arr;
    int min = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (*(ptr + i) < min)
        {
            min = *(ptr + i);
        }
    }

    printf("Smallest number : %d", min);

    return 0;
}