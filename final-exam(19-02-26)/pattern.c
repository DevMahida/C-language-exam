#include <stdio.h>

int main()
{

    int count = 11;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }

    return 0;
}