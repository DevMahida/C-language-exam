#include <stdio.h>

void sum(int, int[]);

int main()
{

    int n;

    printf("Enter the size of Array : ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of array : \n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter element for index %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("Array is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    sum(n, arr);

    return 0;
}

void sum(int n, int arr[])
{
    int sum = 0;
    int last = n - 1;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    printf("\nSum of elements of array is %d.", sum);
    for (int i = 0; i < n; i++)
    {
        if (i < last)
        {
            int tmp = arr[i];
            arr[i] = arr[last];
            arr[last] = tmp;
            last--;
        }
    }

    printf("\nReversed Array is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}