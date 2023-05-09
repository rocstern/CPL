#include <stdio.h>

int main(void)
{
    int income = 0, tax = 0;

    printf("연 소득 입력(단위: 만원) ==>");
    scanf(" %d", &income);

    if(income <= 1200)
    {
        tax = income * 0.06;
    }
    else if(income <= 4600)
    {
        tax = income * 0.15;
    }
    else if(income <= 8800)
    {
        tax = income * 0.24;
    }
    else
    {
        tax = income * 0.35;
    }

    printf("세금액: %d 만원", tax);



    return 0;
}