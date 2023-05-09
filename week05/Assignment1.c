#include <stdio.h>

int main(void)
{
    int payment;

    printf("구매 액수 입력:");
    scanf(" %d", &payment);

    if(payment >= 10000 && payment < 50000)
        payment *= 0.95;
    if(payment >= 50000 && payment < 100000)
        payment *= 0.9;
    if(payment >= 100000)
        payment *= 0.8;

    printf("할인된 금액: %d", payment);


    return 0;
}