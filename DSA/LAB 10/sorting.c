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


int main() {
    srand ( time(NULL) );
    printf("Enter number of elements you want : ");
    scanf("%d",&size);

    int* arr = generateArray(size);


    display(arr);
    insertionSort(arr);
    display(arr);


return 0;
}
