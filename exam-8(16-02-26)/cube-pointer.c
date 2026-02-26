#include <stdio.h>

void cube(int row, int col, int arr[row][col],int *ptr);

int main()
{

    int row, col;
    int *ptr;

    printf("Enter the Number of rows and columns : ");
    scanf("%d %d", &row, &col);

    int arr[row][col];

    printf("Enter the array : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter element for index %d%d : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    ptr = arr[0];

    printf("Array is : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    cube(row,col,arr,ptr);

    return 0;
}

void cube(int row, int col, int arr[row][col],int *ptr){

    printf("%d\n",*ptr);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = *ptr * *ptr * *ptr;
            ptr++;
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

}
