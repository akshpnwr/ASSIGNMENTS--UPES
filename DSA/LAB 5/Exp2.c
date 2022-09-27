#include <stdio.h>
int main()
{
    int size1, size2;

    printf("Enter size of array 1 : ");
    scanf("%d", &size1);

    printf("Enter size of array 2 : ");
    scanf("%d", &size2);

    int arr1[size1];
    int arr2[size2];
    int j;

    printf("Enter elements of 1st array : \n");
    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements of 2nd array : \n");

    for (int i = 0; i < size2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int firstAtEnd[size1 + size2];

    for (int i = 0; i < size1; i++)
    {
        firstAtEnd[i] = arr2[i];
    }

    j = size1;
    for (int i = 0; i < size2; i++)
    {
        firstAtEnd[j] = arr1[i];
        j++;
    }

    printf("Array after appending 1st at the end if 2nd: \n");
    for (int i = 0; i < size1 + size2; i++)
    {
        printf("%d ", firstAtEnd[i]);
    }

    int secondAtEnd[size1 + size2];

    for (int i = 0; i < size1; i++)
    {
        secondAtEnd[i] = arr1[i];
    }

    j = size1;
    for (int i = 0; i < size2; i++)
    {
        secondAtEnd[j] = arr2[i];
        j++;
    }

    printf("\nArray after appending 2nd at the end if 1st: \n");
    for (int i = 0; i < size1 + size2; i++)
    {
        printf("%d ", secondAtEnd[i]);
    }

    int temp;

    for (int i = 0; i < size1 + size2 - 1; i++)
    {
        for (int j = 0; j < size1 + size2 - i - 1; j++)
        {
            if (firstAtEnd[j] > firstAtEnd[j + 1])
            {
                temp = firstAtEnd[j];
                firstAtEnd[j] = firstAtEnd[j + 1];
                firstAtEnd[j + 1] = temp;
            }
        }
    }

    printf("\n");
    for (int i = 0; i < size1 + size2; i++)
    {
        printf("%d ", firstAtEnd[i]);
    }

    return 0;
}
