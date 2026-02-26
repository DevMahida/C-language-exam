#include <stdio.h>

int main()
{

    int n;

    printf("Enter the value of N: ");
    scanf("%d", &n); //123
    
    int first_digit;
    int last_digit = n%10;
    
    while(n != 0)
    {
        first_digit=n%10;
        n = n/10;
    }
    
    printf("First Digit is: %d\n",first_digit);
    printf("Last Digit is: %d\n",last_digit);
    
    int sum = first_digit + last_digit;
    
    printf("The sum of first and last Digit is: %d\n",sum);


    return 0;
}