#include <stdio.h>

int main(void)
{
    // for문의 조건문이 없으면 무한로프
    // 초기값, 조건문, 증감식이 없더라도 ; 는 붙여야한다

//    int i = 0;
//    for (; i < 10;)
//    {
//
//        i++;
//    }


//    int i;
//    i = 1;
//    for(; ;)
//    {
//        printf("%d \n", i);
//        i++;
//    }

    int a, b;
    char op;

    for(; ;)
    {
        printf("수식을 한 줄로 입력:");
        scanf("%d %c %d", &a, &op, &b);

        switch(op)
        {
            case '+':
                printf("%d + %d = %d\n", a, b, a + b);
                break;
            case '-':
                printf("%d - %d = %d\n", a, b, a - b);
                break;
            case '*':
                printf("%d x %d = %d\n", a, b, a * b);
                break;
            case '/':
                printf("%d / %d = %f\n", a, b, (float)a / b);
                break;
            default:
                printf("연산자를 잘못 입룍했습니다.");
        }

    }











    return 0;
}