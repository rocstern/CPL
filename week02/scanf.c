#include <stdio.h>


// scanf 함수
int main(void)
{
    //int a;
    //int b;

    //// 표준 입출력 함수: printf, scanf -> 표준 입출력 헤더파일: standard input/output header -> std + io + .h
    //// printf("%d, a), & 주소연산자-> 메모리 주소
    //scanf("%d", &a);
    //scanf("%d", &b);
    //
    //printf("%d\n", a);
    //printf("%d", b);



    //int first_num;
    //int second_num;

    //printf("첫번째 정수 입력: ");
    //scanf("%d", &first_num);
    //
    //printf("두번째 정수 입력: ");
    //scanf("%d", &second_num);
    //
    ////printf("%d\n", first_num);
    ////printf("%d", second_num);

    //printf("%d %d", first_num, second_num);


    int a;
    int b;

    printf("< 덧셈 계산기 >\n");

    printf("첫번째 정수 입력: ");
    scanf("%d", &a);

    printf("두번째 정수 입력: ");
    scanf("%d", &b);

    printf("%d + %d = %d", a, b, a + b);




}