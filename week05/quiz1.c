#include <stdio.h>

int main(void)
{
    /*  화씨 - 섭씨 온도 변환기
     *  화시온도 입력:
     *  섭씨 온도: ~
     *  섭시 = (화씨 - 32) 5/9
     *
     */

    float celsious_temp, fahrenheit_temp;

    printf(" < 화씨 - 섭씨 온도 변환기 입니다. >\n");

    printf("화씨 온도 입력:");
    scanf(" %f", &fahrenheit_temp);

    celsious_temp = (fahrenheit_temp - 32) * (5 / (float) 9);

    printf("섭씨 온도: %.1f도", celsious_temp);

    return 0;
}