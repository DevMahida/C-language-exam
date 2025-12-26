#include<stdio.h>

int main(){


    float f=0,c;

    printf("Enter the temparature in celsius: ");
    scanf("%f", &c);

    f = (1.8 * c) + 32;

    printf("Temparature in Fahrenheit is: %.2f", f);

    return 0;
}