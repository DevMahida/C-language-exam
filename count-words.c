#include<stdio.h>

int main(){

    char str[100];
    int count = 1;


    printf("Enter any string : ");
    gets(str);

    for(int i=0;str[i]!='\0';i++){
        if(str[i] == 32)
        {
            count++;
        }
    }

    printf("The word count is : %d",count);

    return 0;
}