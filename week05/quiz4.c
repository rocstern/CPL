#include <stdio.h>

int main(void)
{
    /*
     * - 알파벳 하나를 입력 받아 대문자/소문자 반별
     */

    char alp;

    printf(" < 알파벳 대소문자 판별기 입니다. > \n");

    printf("알파벳 하나 입력:");
    scanf("%c", &alp);

    if(alp >= 65 && alp <= 90)
    {
        printf("대문자 입니다.\n");
    }
    else if(alp >= 97 && alp <= 122)
    {
        printf("소문자 입니다.\n");
    }
    else
    {
        printf("잘못 입력하셨습니다.\n");
    }


    return 0;
}