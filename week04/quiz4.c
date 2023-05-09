#include <stdio.h>

int main(void)
{
    int money, cnt_5000, cnt_1000, cnt_500, total;

    printf("교환할 금액 입력:");
    scanf("%d", &money);

    cnt_5000 = money / 5000;
    money -= 5000 * cnt_5000;
    // money = money % 5000; 이렇게 해도 가능

    cnt_1000 = money / 1000;
    money -= 1000 * cnt_1000;

    cnt_500 = money / 500;
    money -= 500 * cnt_500;

    printf("5천원 지폐 %d개, 1천원 지폐 %d개, 5백원 동전 %d개, 남은 잔액 %d원", cnt_5000, cnt_1000, cnt_500, money);

    printf("5천원 지폐 %d장\n", cnt_5000);
    printf("1천원 지폐 %d장\n", cnt_1000);
    printf("5백원 동전 %d개\n", cnt_500);
    printf("남은 잔액: %d원\n", money);
c












}