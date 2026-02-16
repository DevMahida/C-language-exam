#include<stdio.h>

int main(){

    char str[100];
    int len = 0;
    char *ptr;



    ptr = str;

    printf("Enter any string : ");
    gets(str);

    for(int i =0;*ptr != '\0' ; i++){
        len++;
        ptr++;
    }

    printf("Length of string is %d",len);

    return 0;
}