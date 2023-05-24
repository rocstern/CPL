#include <stdio.h>
#include <string.h>

int main(void)
{
    char ss[100] = "XYZ";
    char tt[100] = "ABC";

    int len, result;

    len = strlen(ss);
    printf("ss배열에 들어있는 문자 갯수: %d\n", len);

    result = strcmp(ss, tt);

    if(result == 0)
        printf("두 문자열은 같습니다\n");
    else
        printf("두 문자열은 다릅니다\n");

    strcpy(ss, tt);

    printf("%s\n", ss);
    printf("%s\n", tt);

    strcpy(ss, "WKU");

    printf("%s\n", ss);
    printf("%s\n", tt);

    strcat(ss, tt);

    printf("strcat(ss, tt): %s\n", ss);

    printf("문자열 입력(최대 100글자): ");
    gets(ss);

    puts(ss);











    return 0;
}