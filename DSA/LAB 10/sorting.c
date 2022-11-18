#include<stdio.h>
#include <conio.h>  
#include <stdlib.h>  
#include <time.h>

int size;

int* generateArray(int n) {

    int num =  rand() % 10 + 1;
    int* arr = (int*) malloc(n*sizeof(int));
    arr[0] = num;

    for (int i = 1; i < n; i++)
    {   
        num =  rand() % 10 + 1;
        arr[i] = num;
    }
    
    return arr;
}

void display(int* arr) {
    printf("\n");

    for (int i = 0; i < size; i++)
    {
        printf("%d : ", arr[i]);
    }
    
}

void insertionSort(int* arr) {

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[j]>arr[j+1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        
    }
}

void selectionSort(int* arr) {
    
    int min, min_index, temp;
    for (int i = 0; i < size; i++)
    {
        min = arr[i];

        for (int j = i+1; j < size; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                min_index = j;
            }
        }

        if (arr[i] != min)
        {
            temp = arr[i];
            arr[i] = min;
            arr[min_index] = temp;
        }

    }
    
}

int main() {
    srand ( time(NULL) );
    printf("Enter number of elements you want : ");
    scanf("%d",&size);

    int* arr = generateArray(size);


    display(arr);
    // insertionSort(arr);
    selectionSort(arr);
    display(arr);


return 0;
}
