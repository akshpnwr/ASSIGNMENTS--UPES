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

int main() {
    srand ( time(NULL) );
    printf("Enter number of elements you want : ");
    scanf("%d",&size);

    int* arr = generateArray(size);

    display(arr);
    // insertionSort(arr);
    // selectionSort(arr);
    mergeSort(arr, 0 , size-1);
    display(arr);


return 0;
}
