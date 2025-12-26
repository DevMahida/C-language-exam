#include<stdio.h>

int main(){

    int base;
    float gross=0,hra=0.1,da=0.05,ta=0.08;

    printf("Please enter the base salary: ");
    scanf("%d", &base);

    hra = base * hra;
    da = base * da;
    ta = base * ta;

    gross = base + hra + da + ta;

    printf("Gross salary is : %.2f", gross);

    return 0;
}