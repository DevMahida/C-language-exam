#include<stdio.h>

void addition();
void subtraction();
void multiplication();
void division();
void modulo();

int main(){

    int n;

    menu:

    printf("\nWelcome to calculator : \n\n");
    printf("Press 1 for Addition.\n");
    printf("Press 2 for Subtraction.\n");
    printf("Press 3 for Multiplication.\n");
    printf("Press 4 for Division.\n");
    printf("Press 5 for Modulo.\n");
    printf("Press 0 for exit.\n");

    printf("\nEnter your choice :");
    scanf("%d",&n);
    printf("\n");

    switch (n)
    {
    case 1:
        addition();
        goto menu;
    case 2:
        subtraction();
        goto menu;
    case 3:
        multiplication();
        goto menu;
    case 4:
        division();
        goto menu;
    case 5:
        modulo();
        goto menu;
    case 0:
        break;
    
    default:
        printf("Please Enter the valid input.\n");
        goto menu;
    }

    return 0;
}

void addition(){
    int a,b;

    printf("Enter the 1st number : ");
    scanf("%d",&a);
    printf("Enter the 2nd number : ");
    scanf("%d",&b);

    printf("Addition of %d and %d is %d.\n",a,b,a+b);
}

void subtraction(){
    int a,b;

    printf("Enter the 1st number : ");
    scanf("%d",&a);
    printf("Enter the 2nd number : ");
    scanf("%d",&b);

    printf("Subtraction of %d and %d is %d.\n",a,b,a-b);
}

void multiplication(){
    int a,b;

    printf("Enter the 1st number : ");
    scanf("%d",&a);
    printf("Enter the 2nd number : ");
    scanf("%d",&b);

    printf("Multiplication of %d and %d is %d.\n",a,b,a*b);
}

void division(){
    int a,b;

    printf("Enter the Dividend : ");
    scanf("%d",&a);
    printf("Enter the Divisor : ");
    scanf("%d",&b);

    printf("Division of %d and %d is %.2f.\n",a,b,(float)a/b);
}

void modulo(){
    int a,b;

    printf("Enter the Dividend : ");
    scanf("%d",&a);
    printf("Enter the Divisor : ");
    scanf("%d",&b);

    printf("Modulo of %d and %d is %d.\n",a,b,a%b);
}