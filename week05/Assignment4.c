#include <stdio.h>

int main(void)
{
    char clang, uvlife, creav;
    float total_scr;

    printf("C언어 및 실습 등급:");
    scanf(" %c", &clang);

    printf("대학생활과 자기혁신 등급:");
    scanf(" %c", &uvlife);

    printf("창의적 발상기법 등급:");
    scanf(" %c", &creav);

    clang = 69 - (int)clang;
    uvlife = 69 - (int)uvlife;
    creav = 69 - (int)creav;
    printf("%d \n", clang);
    printf("%d \n", uvlife);
    printf("%d \n", creav);

    total_scr = ((clang * 3) + (uvlife * 2) + (creav * 2)) / (3.0 + 2.0 + 2.0);

    printf("총평점 평균(GPA): %.1f", total_scr);






    return 0;
}