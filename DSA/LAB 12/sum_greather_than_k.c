#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>

int main() {

    int arr[] = {2, 3, 1, 2, 4, 3};
    int size = 6;
    int sum = 0, target = 7;
    int l = 0, r = 0;

    int min = 0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[r];
        while (sum >= target)
        {
          min = r - l + 1;
          sum = sum - arr[l];
          l++;
        }
        r++;
    }
    printf("Array : ");
    for (int i = 0; i < size; i++) printf("%d ",arr[i]);

    printf("\nSize of smallest sub-array whose sum is greather than or equal to %d : %d",target,min);


return 0;
}


/*

HEAPIFY - MIN HEAP

           145
      40             25
  65      12      48      18
1  100  27  7   3   45  9   30  


           145
      40             25
  1      12      48      18
65  100  27  7   3   45  9   30  

           145
      1             25
  40      12      48      18
65  100  27  7   3   45  9   30  

              1
      145             25
  40      12      48      18
65  100  27  7   3   45  9   30  

              1
      145             25
  40      12      3      18
65  100  27  7   48   45  9   30  

               1
      145             3
  40      12      25      18
65  100  27  7   48   45  9   30  

                 1
      145               3
  40        7        25      18
65  100  27  12   48   45  9   30  

                 1
       7                   3
  40        145        25      18
65  100   27  12     48   45  9   30  

                 1
       7                   3
  40        145        25        9
65  100   27  12     48   45  18   30  

                  1
       7                   3
  40        12          25        9
65  100   27  145     48   45  18   30  

                  1
       7                     3
  40        12          25        9
65  100   27  145     48   45  18   30  

                  1
       7                   3
40        12        25        9
65  100   27  145   48   45  18   30  

*/