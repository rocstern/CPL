#include <stdio.h>

void pointerTest(char str[])
{
    if (str[0] == '\0')
        return;

    printf("%c\n", str[0]);
    pointerTest(str +1);
}

int main(void)
{
    char str[] = {"abcdefghijklnmopqrstuvwxyz"};

//    pointerTest(str);
    printf("%c\n", str[0]);

    printf("%c\n", (str+1)[0]);

    printf("%s\n", (str+2));


}

