#include<stdio.h>

int main(){

    int tAngle, fAngle, sAngle;
    

    printf("Please enter the 1st angle of triangle: ");
    scanf("%d", &fAngle);

    printf("Please enter the 2st angle of triangle: ");
    scanf("%d", &sAngle);

    
    tAngle = 180 - fAngle - sAngle;
    
    printf("The 3rd angle is : %d", tAngle);

    return 0;
}