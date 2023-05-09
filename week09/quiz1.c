#include <stdio.h>

int main(void)
{
//
//    // 카운트 시작값(정수)를 입력받아 0까지 카운트 다운하는 프로그램
//
//    int cnt_num;
//
//    printf("시작값:");
//    scanf("%d", &cnt_num);
//
//    for (int i = cnt_num; i >= 0; i--)
//    {
//        printf("%d \n", i);
//    }


//    // 줄 수를 입력받아 줄 수 만큼 * 출력
//
//    int line;
//    printf("줄 개수 입력:");
//    scanf("%d", &line);
//
//    for (int i = 0; i < line; i++)
//    {
//        for (int j = 0; j < line; j++)
//        {
//            printf("* ");
//        }
//        printf("\n");
//    }


    // 줄 개수를 입력받아 기 줄 개수만큼 직각삼각형 모양으로 출력

    int line;

    printf("줄 개수:");
    scanf("%d", &line);

    for (int i = 0; i < line; i++)
    {
        for (int j = 0; j <= i ; j++)
        {
            printf("* ");
        }
        printf("\n");
    }





}