#include <stdio.h>
#include <string.h>

int main(void)
{
    char fWord, cWord;
    char sen[100];
    int len;

    puts("문장 입력: ");
    gets(sen);

    puts("찾을 문자와 변경할 문자 입력: ");
    scanf("%c %c", &fWord, &cWord);

    len = strlen(sen);

    for (int i = 0; i < len; i++)
    {
        if(sen[i] == fWord)
            sen[i] = cWord;
    }

    puts(sen);

    return 0;
}