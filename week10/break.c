#include <stdio.h>

int main(void)
{
    // 반복문을 탈출할때 break를 사용한다

    for (int i = 1; i < 101; i++)
    {
        printf("%d\n", i);

        // 반복하다가 특정 상황에서 탈출 => 조건문
        // i가 50일때 탈출하지만 break보다 printf가 먼저 실행됨으로 50까지 출력 후 탈출된다
        if(i == 50)
            break;
    }


    // 1 ~ 100까지 합산 중 결과값이 3000을 초과시 탈출
    int sum_val = 0;

    for (int i = 1; i < 101; i++)
    {
        sum_val += i;
        if(sum_val > 3000)
            break;
    }

    printf("sum_val: %d\n", sum_val);






    return 0;
}