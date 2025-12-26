#include <stdio.h>

int main()
{

    int marks;
    char grade;

    printf("Please enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 90)
    {
        printf("Your grade is A. ");
        grade = 'A';
    }
    else if (marks >= 80)
    {
        printf("Your grade is B. ");
        grade = 'B';
    }
    else if (marks >= 70)
    {
        printf("Your grade is C. ");
        grade = 'C';
    }
    else if (marks >= 50)
    {
        printf("Your grade is D. ");
        grade = 'D';
    }
    else
    {
        printf("Your grade is F. ");
        grade = 'F';
    }

    switch (grade)
    {
    case 'A':
        printf("Excellent Work!");
        break;
    case 'B':
        printf("Well Done!");
        break;
    case 'C':
        printf("Good Job!");
        break;
    case 'D':
        printf("You Passed, You could do batter.");
        break;
    case 'F':
        printf("Sorry, You failed.");
        break;
    }

    if (grade == 'A' || grade=='B'|| grade=='C'|| grade=='D')
    {
        printf(" You are eligable for the next level.");
    }
    else{
        printf(" Please try again next time.");
    }
    

    return 0;
}