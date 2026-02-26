#include<stdio.h>
#include<string.h>

int main(){

    char str[100];

    printf("Enter Any String : ");
    gets(str);

    strrev(str);

    printf("Reverse String is : %s",str);

    return 0;
}
