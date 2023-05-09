#include <stdio.h>

int main(void)
{

    /*
     - 원의 넓이를 구하라
     > 반지름 입력:
     > 원의 넓이:
     > 단 원주율은 3.14
     */

    double pi = 3.14;
    int radious;
    double circle_surface;

    printf("< 원의 넓이를 구하는 프로그램 입니다. > \n");

    printf("반지름 입력:");
    scanf(" %d", &radious);

    circle_surface = (radious * radious) * pi;

    printf("원의 넓이: %.2f", circle_surface);


    return 0;
}