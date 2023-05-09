#include <stdio.h>

int main(void)
{
    char alp;

    printf(" < 알바벳 대소문자 변환기 > \n");

    printf("알파벳 입력: ");
    scanf(" %c", &alp);

    if(alp < 91)
        alp += 32;
    else
        alp -= 32;

    printf("대소문자 변환 결과: %c\n", alp);


    return 0;
}