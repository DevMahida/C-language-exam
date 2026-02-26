#include <stdio.h>

int main()
{

    int row, col, row_no, col_no, sum1 = 0, sum2 = 0;

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
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("Enter the index number of row : ");
    scanf("%d", &row_no);
    printf("Enter the index number of column : ");
    scanf("%d", &col_no);

    printf("\nElements of row %d : ", row_no);
    for (int k = 0; k < col; k++)
    {
        sum1 = sum1 + arr[row_no][k];
        printf("%d ", arr[row_no][k]);
    }
    printf("\nThe sum is : %d",sum1);

    printf("\nElements of column %d : ", col_no);
    for (int k = 0; k < row; k++)
    {
        sum2 = sum2 + arr[k][col_no];
        printf("%d ", arr[k][col_no]);
    }
    printf("\nThe sum is : %d",sum2);


    return 0;
}
