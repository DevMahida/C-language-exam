#include <stdio.h>

int main()
{

    int row, col, max=-1000000,r,c;

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

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(arr[i][j]>max){
                max = arr[i][j];
                r = i;
                c = j;
            }
        }
    }

    printf("\nLagrest element of array is %d found on index %d%d.",max,r,c);

    return 0;
}