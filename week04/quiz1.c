#include <stdio.h>

int main(void)
{
//    int number;
//
//    printf("숫자 입력:");
//    scanf(" %d", &number);

//    if (number % 2 == 0)
//    {
//        printf("입력한 숫자는 짝수 입니다\n");
//    }
//    else
//    {
//        printf("입력한 숫자는 홀수 입니다\n");
//    }

//    if (number % 3 == 0)
//    {
//        printf("입력한 숫자는 3의 배수 입니다.\n");
//    }
//    else
//    {
//        printf("입력한 숫자는 3의 배수가 아닙니다.\n");
//    }

//    int number;
//
//    printf("숫자 입력:");
//    scanf(" %d", &number);
//
//
////    if (number % 3 == 0 && number % 2 != 0)
//    if (number % 3 == 0 && number % 2 == 1)
//    {
//        printf("입력한 숫자는 3의 배수이면서 홀수 입니다.\n");
//    }


//    float num1, num2;
//    char operator;
//
//    char string[] = "그냥 해야함";
//
//
//    printf("첫번째 숫자 입력:");
//    scanf(" %f", &num1);
//
//    printf("연산자 입력:");
//    scanf(" %c", &operator);
//
//    printf("두번째 숫자 입력:");
//    scanf(" %f", &num2);
//
//    if (operator == '+')
//    {
//        printf("%f + %f = %f\n", num1, num2, num1+num2);
//    }
//    else if (operator == '-')
//    {
//        printf("%f - %f = %f\n", num1, num2, num1-num2);
//    }
//    else if (operator == '*')
//    {
//        printf("%f x %f = %f\n", num1, num2, num1*num2);
//    }
//    else if (operator == '/')
//    {
//        printf("%f / %f = %f\n", num1, num2, num1/num2);
//    }
//    else
//    {
//        printf("연산자를 잘못 입력했습니다.\n");
//    }


    float num1, num2;
    char operator;

    printf("수식 입력(띄어쓰기필요):");
    scanf(" %f %c %f", &num1, &operator, &num2);

//    if (num2 == 0)
//    {
//        printf("0으로 나눌 수 없습니다\n");
//    }
//    else
//    {
//        if (operator == '+')
//        {
//            printf("%f + %f = %f\n", num1, num2, num1+num2);
//        }
//        else if (operator == '-')
//        {
//            printf("%f - %f = %f\n", num1, num2, num1-num2);
//        }
//        else if (operator == '*')
//        {
//            printf("%f x %f = %f\n", num1, num2, num1*num2);
//        }
//        else if (operator == '/')
//        {
//            printf("%f / %f = %f\n", num1, num2, num1/num2);
//        }
//        else
//        {
//            printf("연산자를 잘못 입력했습니다.\n");
//        }

    if (operator == '+')
    {
        printf("%f + %f = %f\n", num1, num2, num1+num2);
    }
    else if (operator == '-')
    {
        printf("%f - %f = %f\n", num1, num2, num1-num2);
    }
    else if (operator == '*')
    {
        printf("%f x %f = %f\n", num1, num2, num1*num2);
    }
    else if (operator == '/')
    {
        if (num2 == 0)
            printf("0으로 나눌 수 없습니다.\n");
        else
            printf("%f / %f = %f\n", num1, num2, num1/num2);
    }
    else
    {
        printf("연산자를 잘못 입력했습니다.\n");
    }

    char string[] = "스트링입니다.";










}