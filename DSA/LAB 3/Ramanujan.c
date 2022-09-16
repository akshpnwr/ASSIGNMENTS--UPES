#include <stdio.h>

void sort(int arr[], int n)
{
    int minElementIndex, temp;

    for (int i = 0; i < n - 1; i++)
    {

        // finding minimum value in array
        minElementIndex = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[minElementIndex])
                minElementIndex = j;

        temp = arr[i];
        arr[i] = arr[minElementIndex];
        arr[minElementIndex] = temp;
    }
}

int Ramanujan()
{

    int arr[1000] = {};

    int index = 0;

    int limit;

    printf("Enter limit: ");
    scanf("%d", &limit);

    // Creating an array of all "sum of cubes" values
    for (int i = 1; i <= limit; i++)
    {
        for (int j = i; j <= limit; j++)
        {
            arr[index] = i * i * i + j * j * j;
            index++;
        }
    }

    // Sorting the array
    sort(arr, 1000);

    int numbersFound = 0;
    // Finding duplicates which are ramanujan numbers
    for (int i = 0; i < 1000; i++)
    {
        if (arr[i] == 0)
        {
            continue;
        }
        if (arr[i] == arr[i + 1])
        {
            numbersFound++;
            printf("%d  ", arr[i]);
        }
    }

    if (!numbersFound)
        printf("No ramanujan numbers exist under this limit!");

    return 0;
}
