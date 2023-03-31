#include <stdio.h>
#include <string.h>

int getLen(char str[])
{
    if (str[0] == '\0')
        return 0;
    return 1 + getLen(str + 1);
}

void checkStrIsPalindrome(char str[])
{
    int len = getLen(str);
    int str_idx = len - 1;

    for (int i = 0; i < len; i++)
    {
        if(str[i] != str[str_idx - i])
        {
            printf("회문이 아닙니다.\n");
            return;
        }
    }
    printf("회문이 맞습니다.\n");
}




int main(void)
{
    char str[] = "tex1et";
    checkStrIsPalindrome(str);

    strlen(str);
}