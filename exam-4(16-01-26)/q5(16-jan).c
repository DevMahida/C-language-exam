#include <stdio.h>

int main()
{
    int n=5;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ",j);
        }
        
        for(int s = i;s<5;s++){
            printf("    ");
        }

        for (int j = 5; j >= n; j--)
        {
            printf("%d ",j);
            
        }n--;
        
        printf("\n");
    }
    

    return 0;
}

// 5 >= 5
// 5 >= 4
// 5 >= 5
// 5 >= 5
