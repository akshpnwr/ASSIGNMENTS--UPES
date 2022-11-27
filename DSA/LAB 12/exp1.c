#include<stdio.h>
int main() {

int arr[] = {0, 1, 8, 27, 64, 125, 216};
 
int keys[] =  {1, 9, 4, 3, 7};

int arrSize = sizeof(arr)/sizeof(int);
int keysSize =  sizeof(keys)/sizeof(int);

for (int i = 0; i < keysSize; i++)
{
    if (keys[i] < arrSize)
    {
        printf("%d ", arr[keys[i]]);
    }
}


return 0;
}
