#include <stdio.h>

int main(void)
{
    // 반복문
    // 초기값 조건식 증감식

    // i++ 단항산술연산자
    // a + b 이항산물연산자


    // 증감식은 ++ -- 외에도 다른 방식으로 탈출 조건을 짤 ㅅ 수 있다
//    int i;
//    for(i = 10; i >= 0; i = i-2)
//    {
//        printf("%d\n", i);
//    }



/*    for (int i = 1; i < 14; i = i +2)
    {
        printf("%d\n", i);
    }
*/
//
//    for (int i = 1; i <= 100; i++)
//    {
//        if (i % 2 == 0)
//            printf("%03d\n", i);
//    }

/*
    // 초기화를 해줘야 garbage 값이 안쓰인다
    int hap = 0;
    for (int i = 1; i < 101; i++)
    {
        hap += i;
    }
    printf("1 ~ 100까지의 합은 %d 입니다.\n", hap);
*/
    int hap = 0;
    for (int i = 1; i <= 100; i++)
    {
        if(i % 2 == 0) { hap = hap + i; }
    }

    printf("1 ~ 100까지 짝수의 합은 %d 입니다.\n", hap);




























    return 0;
}