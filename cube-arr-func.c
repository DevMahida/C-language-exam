#include <stdio.h>


int main()
{

    int n;

    printf("Enter the size of Array : ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of array : \n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter element for index %d : ",i);
        scanf("%d",&arr[i]);
    }

    int *ptr = arr;

    printf("Array is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = *ptr * *ptr * *ptr;
        ptr++;
    }

    printf("\nCubr of each elements of Array is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
