// a,e,i,o,u
#include <stdio.h>

int main()
{

    char str[100];
    int vowel = 0, consonant = 0;

    printf("enter any string : ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == 65||str[i] == 69||str[i] == 73||str[i] == 79||str[i] == 85||str[i] == 97||str[i] == 101||str[i] == 105||str[i] == 111||str[i] == 117){
            vowel++;
        }else{
            consonant++;
        }
    }

    printf("Count of vowel is : %d\n",vowel);
    printf("Count of consonant is : %d",consonant);

    return 0;
}