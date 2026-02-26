#include <stdio.h>

int main()
{

    int count = 25;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {

            if (i % 2 == 0)
            {
                printf("* ");
            }
            else
            {
                printf("%d ", count);
            }

            count++;
        }
        printf("\n");
    }

    return 0;
}