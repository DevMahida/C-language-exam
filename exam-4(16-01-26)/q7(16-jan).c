#include <stdio.h>

int main()
{

    for (int i = 1; i <= 7; i++)
    {

        for (int j = 1; j <= 6; j++)
        {

            if(j==1||i==1||i==4||i==7){
                printf("A ");
            }
            else{
                printf("  ");
            }

        }
        printf("\n");
    }

    return 0;
}