#include <stdio.h>

int main(void)
{
    /*
    - 조건
    > 4가지 정도의 메뉴
    > scanf를 통한 메뉴 선택과 지불할 금액 대입
    > 거스름돈 총액과 몇개의 5000, 1000, 500 금액권으로 이루어져 있는지 출력
    */
    int menu_num, menu_price;
    int money, cnt_5000, cnt_1000, cnt_500;
    menu_price = 0;

    // 메뉴판 안내
    printf(" < 카페 메뉴판 >\n");
    printf("[1] 아메리카노(2500원)\n");
    printf("[2] 카페라떼(4000원)\n");
    printf("[3] 카푸치노(4500원)\n");
    printf("[4] 카라멜 마끼아또(5500원)\n");

    // 기입한 메뉴 번호를 menu_num에 대입
    printf("메뉴 번호:");
    scanf("%d", &menu_num);

    // 기입한 지불 금액을 money에 대입
    printf("지불할 금액 입력:");
    scanf("%d", &money);

    // 전달받은 menu_num 값에 따라 switch로 분기처리
    // 각 case 따라 menu_price를 지정
    switch (menu_num) {
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
            printf("[error] 메뉴를 잘못 입력하셨습니다.\n");
    }

    // 지불 금액 - 메뉴 가격 = 거스름돈
    money = money - menu_price;
    printf("거스름 돈: %d원\n", money);

    // 5천원 갯수 계산
    cnt_5000 = money / 5000;
    money = money % 5000;

    // 1천원 갯수 계산
    cnt_1000 = money / 1000;
    money = money % 1000;

    // 5백원 갯수 계산
    cnt_500 = money / 500;
    money = money % 500;

    // 거스름돈이 몇개의 5천, 1천, 5백원 지폐, 동전으로 이루어져있는지 출력
    // 단 if문을 통해 0개의 금액권은 출력하지 않는다
    if (cnt_5000 > 0)
        printf("5천원 지폐 %d장\n", cnt_5000);
    if (cnt_1000 > 0)
        printf("1천원 지폐 %d장\n", cnt_1000);
    if (cnt_500)
        printf("5백원 동전 %d개\n", cnt_500);
}