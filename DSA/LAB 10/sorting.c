#include<stdio.h>
#include <conio.h>  
#include <stdlib.h>  
#include <time.h>

int size;

int* generateArray(int n) {

    int num =  rand() % 100 + 1;
    int* arr = (int*) malloc(n*sizeof(int));
    arr[0] = num;

    for (int i = 1; i < n; i++)
    {   
        num =  rand() % 100 + 1;
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

void merge(int* arr, int l, int m, int r) {

    int n1 = m - l +1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    
    for (int i = 0; i < n2; i++)
        R[i] = arr[m + i + 1];

    int i = 0 , j = 0, k = l;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
    
}

void mergeSort(int* arr, int l, int r) {  

        if (l<r)
        {
            int m = l+ (r-l)/2;
            
            mergeSort(arr, l, m);
            mergeSort(arr, m+1, r);

            merge(arr, l, m, r);            
        }
        

}

int part(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1, temp;
  
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    temp = arr[i+1];
    arr[i+1] = arr[high];
    arr[high] = temp;
    return (i + 1);
}

void quickSort(int* arr, int low, int high) {

    if (low < high)
    {

    int pivot = part(arr, low, high);

    quickSort(arr , low, pivot - 1);

    quickSort(arr, pivot + 1, high);
    
    }
    
}

int main() {
    srand ( time(NULL) );
    printf("Enter number of elements you want : ");
    scanf("%d",&size);

    int* arr = generateArray(size);
    int* tempArr = arr;
    clock_t t;
    t = clock();
    double time_taken;

    printf("The elements are : ");
    display(arr);
    printf("\n\nPerforming Insertion sort...");
    insertionSort(arr);
     t = clock() - t;
    time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
    printf("Insertion sort took %f seconds to execute \n", time_taken);

    arr = tempArr;
    printf("\nPerforming Selection sort...");
    selectionSort(arr);
    t = clock() - t;
    time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
    printf("Selection sort took %f seconds to execute \n", time_taken);

    arr = tempArr;
    printf("\nPerforming Merge sort...");
    mergeSort(arr, 0 , size-1);
    t = clock() - t;
    time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
    printf("Merge sort took %f seconds to execute \n", time_taken);

    arr = tempArr;
    printf("\nPerforming Quick sort...");
    quickSort(arr, 0,size-1);
    t = clock() - t;
    time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
    printf("Quick sort took %f seconds to execute \n", time_taken);
    
    printf("\nThe elements after sorting are : ");
    display(arr);


return 0;
}
