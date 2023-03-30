#include <stdio.h>

int main()
{
    int menu_num;

    printf(" < 커피 메뉴판 > \n");
    printf("[1] 아메리카노\n");
    printf("[2] 카페라떼\n");
    printf("[3] 카푸치노\n");
    printf("[4] 카라멜 마끼아또\n");
    printf("[5] 바닐라라떼\n");

    printf("메뉴 번호 입력:");
    scanf("%d", &menu_num);

    switch (menu_num)
    {
        case 1:
            printf("아메리카노 주문하셨습니다.\n");
            break;
        case 2:
            printf("카페라떼 주문하셨습니다.\n");
            break;
        case 3:
            printf("카푸치노 주문하셨습니다.\n");
            break;
        case 4:
            printf("카라멜 마끼아또 주문하셨습니다.\n");
            break;
        case 5:
            printf("바닐라라떼 주문하셨습니다.\n");
            break;
        default:
            printf("[error] 메뉴 입력 오류!!!\n");
    }



}