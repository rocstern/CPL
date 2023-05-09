#include <stdio.h>

int main(void)
{
    int a, b, c, top_val;

    printf("서로 다른 정수 입력:");
    scanf(" %d %d %d", &a, &b, &c);

    if(a > b)
    {
        if(a > c)
        {
            top_val = a;
        }
        else
        {
            top_val = c;
        }
    }
    else
    {
        if(b > c)
        {
            top_val = b;
        }
        else
        {
            top_val = c;
        }
    }

    printf("최대값: %d\n", top_val);



    return 0;
}