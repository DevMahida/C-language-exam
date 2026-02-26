#include <stdio.h>

int main()
{

    int val;
    printf("Simple Calculator Program \n");
    
    

    printf("Press 1 for addition\n");
    printf("Press 2 for subtraction\n");
    printf("Press 3 for Multiplication\n");
    printf("Press 4 for division\n");
    scanf("%d", &val);

    int a, b;
    printf("\nEnter the value of a and b : ");
    scanf("%d %d", &a, &b);

    switch (val)
    {
    case 1:
        printf("The addition is : %d\n", a + b);
        break;
    case 2:
        printf("The subtraction is : %d\n", a - b);
        break;
    case 3:
        printf("The multiplication is : %d\n", a * b);
        break;
    case 4:
        printf("The division of %d by %d is : %d\n", a, b, a / b);
        break;
    default:
        printf("Invalid choice");
        break;
    }

    return 0;
}