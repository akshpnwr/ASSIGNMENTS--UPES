#include <stdio.h>
int main()
{

    int row, col;

    printf("Enter row and column of the matrix : ");

    scanf("%d", &row);
    scanf("%d", &col);

    int arr[row][col];

    printf("Enter values in the matrix : ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("\nEnter value arr[%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The Matrix is\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("Transpose of the matrix\n\n");

    int transpose[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            transpose[i][j] = arr[j][i];
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }

    int isSymmetric = 1;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] != transpose[i][j])
            {
                isSymmetric = 0;
            }
        }
    }

    if (isSymmetric)
    {
        printf("\nSymmetric!!!!!!!!!\n");
    }

    // extra code
    // int row = 3, col = 3;
    // int newArr[3][3] = {{1, 2, 3}, {2, 3, 4}, {3, 4, 5}};
    // //

    // int mod = 0;

    // int tempRow = 0, tempCol = 0;

    // // int newMatrix[row - 1][col - 1];

    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         printf("%d ", newArr[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("\n");

    // for (int i = 0; i < col; i++)
    // {
    //     for (int j = 0; j < row; j++)
    //     {
    //         for (int k = 0; k < col; k++)
    //         {

    //             if (j == i && k == col)
    //             {

    //                 // printf("%d %d", j, k);
    //             }

    //             else
    //             {
    //                 printf("%d %d", j, k);
    //             }
    //         }
    //     }

    //     // if (i%2==0)
    //     // {
    //     //    mod = mod + arr[0][col];
    //     // }
    //     // else {
    //     //    mod = mod - arr[0][col];
    //     // }
    // }

    return 0;
}
