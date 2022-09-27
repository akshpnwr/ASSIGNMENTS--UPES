#include <stdio.h>
int main()
{

    int size1, size2;

    printf("Enter size of array 1 : ");
    scanf("%d", &size1);

    printf("Enter size of array 2 : ");
    scanf("%d", &size2);

    int arr1[size1 + size2];

    printf("Enter elements of 1st array : \n");
    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements of 2nd array : \n");

    for (int i = size1; i < (size1 + size2); i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Array after appending 2nd at the end if 1st: \n");
    for (int i = 0; i < size1 + size2; i++)
    {
        printf("%d ", arr1[i]);
    }

    return 0;
}
