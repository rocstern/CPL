#include <stdio.h>

int main(void)
{
    int menu_num, menu_price;
    int money, cnt_5000, cnt_1000, cnt_500;
    menu_price = 0;

    printf(" < 카페 메뉴판 >\n");
    printf("[1] 아메리카노(2500원)\n");
    printf("[2] 카페라떼(4000원)\n");
    printf("[3] 카푸치노(4500원)\n");
    printf("[4] 카라멜 마끼아또(5500원)\n");

    printf("메뉴 번호:");
    scanf("%d", &menu_num);

    printf("지불할 금액 입력:");
    scanf("%d", &money);

    switch (menu_num)
    {
        case 1:
            printf("아메리카노를 주문하셨습니다.\n");
            menu_price = 2500;
            break;
        case 2:
            printf("카페라떼를 주문하셨습니다.\n");
            menu_price = 4000;
            break;
        case 3:
            printf("카푸치노를 주문하셨습니다.\n");
            menu_price = 4500;
            break;
        case 4:
            printf("카라멜 마끼아또를 주문하셨습니다.\n");
            menu_price = 5500;
            break;
        default:
            printf("메뉴를 잘못 입력하셨습니다.\n");
    }

    money = money - menu_price;
    printf("거스름 돈: %d원\n", money);

    cnt_5000 = money / 5000;
    money = money % 5000;

    cnt_1000 = money / 1000;
    money = money % 1000;

    cnt_500 = money / 500;
    money = money % 500;

    printf("5천원 지폐 %d장\n", cnt_5000);
    printf("1천원 지폐 %d장\n", cnt_1000);
    printf("5백원 동전 %d개\n", cnt_500);

}