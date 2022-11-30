#include<stdio.h>
#include<stdlib.h>

int main() {

    int size, target;
    printf("Enter size of the array : ");
    scanf("%d",&size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand()%100+1;
    }

    printf("Enter the target sum : ");
    scanf("%d",&target);

    int sum = 0;
    int l = 0, r = 0;
    int min = 0;

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
            min = r - l + 1;
            sum = sum - arr[l];
            l++;
        }
        
        r++;
    }
    
    printf("Randomly generated array : ");
    for (int i = 0; i < size; i++) printf("%d ",arr[i]);

    printf("\nSize of smallest sub-array whose sum is equal to %d : %d",target,min);

return 0;
}
