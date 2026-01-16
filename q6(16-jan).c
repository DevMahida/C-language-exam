#include <stdio.h>

int main()
{

    for (int i = 'A'; i <= 'E'; i++)
    {

        // for(int s = i;s<5;s++){
        //     printf("* ");
        // }

        for (int j = i; j >= 'A'; j--)
        {

            if (j == 'C')
            {
                printf("@ ");
            }
            else
            {
                printf("%c ", j);
            }
        }
        printf("\n");
    }

    return 0;
}