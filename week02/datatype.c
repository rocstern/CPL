#include <stdio.h>

int main(void)
{
    /*
    // 출력서식 %d, %f
    // %4.2 의미 -> 4는 4자리 확보, .2는 소숫점 2째 자리까지
    자리수 맞추는거 매우 중요
    이무것도 안쓰면 6자리까지

    float a;
    a = 3.14;
    printf("%06.3f", a);
    */


    /*
    printf("< 나눗셈 계산기 >\n");

    int a;
    int b;
    float result;

    printf("첫번째 정수 입력: ");
    scanf("%d", &a);

    printf("두번째 정수 입력: ");
    scanf("%d", &b);

    result = (float) a / (float) b;

    printf("%d / %d = %.2f", a, b, result);
    */


    // !!! 정수 / 정수 결과값은 정수형태이다
    // 강제형변환 -> 사용할때만 형변환이 되며 변수 자체의 타입은 여전히 그대로다

    // 실수 / 정수 결과값은 실수형태이다, 정수 / 실수 결과값도 실수형태임

    /*
    int a, b;

    printf("< 나눗셈 계산기 >\n");

    printf("첫번째 정수 입력: ");
    scanf("%d", &a);

    printf("두번째 정수 입력: ");
    scanf("%d", &b);

    printf("%d / %d = %.2f", a, b, (float) a / b);
    */

    float weight;
    scanf("%f", &weight);
    printf("%f", weight * 1000);









}