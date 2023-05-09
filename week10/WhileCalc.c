#include <stdio.h>

int main(void)
{
    int a, b;
    char op;

    while(1)
    {
        printf("수식을 한줄로 입력:");
        scanf("%d %c %d", &a, &op, &b);

        switch(op)
        {
            case '+': printf("%d %c %d = %d\n", a, op, b, a+b); break;
            case '-': printf("%d %c %d = %d\n", a, op, b, a-b); break;
            case '*': printf("%d %c %d = %d\n", a, op, b, a*b); break;
            case '/': printf("%d %c %d = %f\n", a, op, b, (float)a/b); break;
            default: printf("수식을 잘못 입력하셨습니다.\n");
        }

    }
    return 0;
}