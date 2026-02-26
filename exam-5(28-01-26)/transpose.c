#include <stdio.h>

int main()
{

    int row, col;

    printf("Enter the number of rows and cols in array : ");
    scanf("%d %d", &row, &col);

    int arr[row][col];

    printf("Enter the elements of array : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter the element of index %d%d : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Original array is : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    printf("Transpose of array is : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }


    return 0;
}