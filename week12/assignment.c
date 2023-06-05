#include <stdio.h>
#include <string.h>
int main(void)
{

    // vir ==> 바이러스
    char sen[100];

    puts("문자열 입력(최대 100자): ");
    gets(sen);

    for (int i = 0; i < strlen(sen); i++)
    {
        if(sen[i] != 'v')
            continue;
        else
        {
            if(sen[i+1] == 'i' && sen[i+2] == 'r')
            {
                puts("바이러스 발견!!!\n");
                break;
            }
        }
    }

    return 0;
}