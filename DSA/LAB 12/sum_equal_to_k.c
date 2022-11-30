#include<stdio.h>
#include<stdlib.h>

int smallest(int arr[], int size,int target, int* small, int* large) {
    
    int sum = 0;
    int l = 0, r = 0;
    int temp = 0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[r];
        if (sum > target)
        {
            sum = sum - arr[l];
            l++;
        }
        if (sum == target)
        {
            temp = r - l + 1;
            if (*small == 0 || *small > temp)
            {
                *small = temp;
            }

            if (*large == 0 || *large < temp)
            {
                *large = temp;
            }

            sum = sum - arr[l];
            l++;
        }
        
        r++;
    }

}

int main() {

    int size, target;
    printf("Enter size of the array : ");
    scanf("%d",&size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand()%10+1;
    }

    printf("Enter the target sum : ");
    scanf("%d",&target);

    int smallest_subarray_size = 0, largest_subarray_size = 0;

    smallest(arr, size, target, &smallest_subarray_size, &largest_subarray_size);

    printf("Randomly generated array : ");
    for (int i = 0; i < size; i++) printf("%d ",arr[i]);

    printf("\nSize of smallest sub-array whose sum is equal to %d : %d",target,smallest_subarray_size);
    printf("\nSize of largest sub-array whose sum is equal to %d : %d",target,largest_subarray_size);


return 0;
}
