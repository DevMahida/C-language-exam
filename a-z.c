#include <stdio.h>

int main()
{

    char e = 'z';
    char i = 'a';

    do
    {
        printf("%c ", i);
        i = i + 4;
    } while (i <= e);

    return 0;
}