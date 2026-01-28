#include <stdio.h>

int main()
{

    int n;

    printf("Enter the size of array : ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of array : \n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of index %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("Negative elements of array : ");
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            printf("%d ",arr[i]);
        }
    }

    return 0;
}