#include <stdio.h>

int main(void)
{
    int num1, num2, num3;

    printf("3개 서로 다른 정수 입력:");
    scanf(" %d %d %d", &num1, &num2, &num3);

    if(num1 > num2)
    {
        if(num1 > num3)
        {
            printf("num1: %d가 가장 큽니다.\n", num1);
        }
        else
        {
            printf("num3: %d가 가장 큽니다.\n", num3);
        }
    }
    else
    {
        if(num2 > num3)
        {
            printf("num2: %d가 가장 큽니다.\n", num2);
        }
        else
        {
            printf("num3: %d가 가장 큽니다.\n", num3);
        }
    }




    return 0;
}