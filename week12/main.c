#include <stdio.h>
#include <string.h>

int main(void)
{
    char ss[100] = "";
    char tt[100] = "";
    int len;

    printf("문자열 입력: ");

    scanf("%s", &ss);
    len = strlen(ss);

    for (int i = 0; i < len; i++)
    {
        if(ss[i] >= 'A' && ss[i] <= 'Z')
            tt[i] = ss[i] + 32;
        else if(ss[i] >= 'a' && ss[i] <= 'z')
            tt[i] = ss[i] -32;
        else
            tt[i] = ss[i];
    }



    return 0;
}