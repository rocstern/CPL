#include <stdio.h>

int main(void)
{
    // 윤년 걔산
    // 4로 나누어 떨어지고 100으로 나누어 떨어지지 않으면 윤년
    // 400으로 나누어 떨어지는 해도 윤년이다

//    int year;
//
//    printf(" < 윤년 계산기 > \n");
//    printf("연도를 입력하세요:");
//    scanf("%d", &year);
//
//    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//    {
//        printf("윤년 입니다.\n");
//    }
//    else
//    {
//        printf("윤년이 아닙니다.\n");
//    }


    int year;

    printf("년도 입력:");
    scanf("%d", &year);

    switch (year % 12)
    {
        case 0:
            printf("올해는 '원숭이'띠 입니다.\n"); break;
        case 1:
            printf("올해는 '닭'띠 입니다.\n"); break;
        case 2:
            printf("올해는 '개'띠 입니다.\n"); break;
        case 3:
            printf("올해는 '돼지'띠 입니다.\n"); break;
        case 4:
            printf("올해는 '쥐'띠 입니다.\n"); break;
        case 5:
            printf("올해는 '소'띠 입니다.\n"); break;
        case 6:
            printf("올해는 '호랑이'띠 입니다.\n"); break;
        case 7:
            printf("올해는 '토끼'띠 입니다.\n"); break;
        case 8:
            printf("올해는 '용'띠 입니다.\n"); break;
        case 9:
            printf("올해는 '뱀'띠 입니다.\n"); break;
        case 10:
            printf("올해는 '말'띠 입니다.\n"); break;
        case 11:
            printf("올해는 '양'띠 입니다.\n"); break;
        default:
            printf("[error] 계산 오류!!!\n");
    }


}