#include <stdio.h>

int main()
{

    int n,count=0;

    printf("Enter the value of N: ");
    scanf("%d", &n); //123

    while(n != 0){
        count++;
        n = n/10;
    }
    
    printf("Total number of digits in N: %d",count);


    return 0;
}