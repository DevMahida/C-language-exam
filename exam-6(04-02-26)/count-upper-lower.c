#include <stdio.h>

int main()
{

    char str[100];
    int upper = 0, lower = 0;

    printf("enter any string : ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 65 && str[i] <= 90){
            upper++;
        }
        if(str[i] >= 97 && str[i] <= 122)
        {
            lower++;
        }
    }

    printf("Count of uppercase is : %d\n",upper);
    printf("Count of lowercase is : %d",lower);

    return 0;
}