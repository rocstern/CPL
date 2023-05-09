#include <stdio.h>

#define TRUE    1
#define FALSE   0

int main(void)
{

//    int i = 0;
//
//    // while과 for의 차이
//    while(i < 5)
//    {
//        printf("%d\n", i);
//        i++;
//    }
//
//    for (int j = 0; j < 5; j++)
//    {
//        printf("%d\n", j);
//    }


    int dan = 7;

//    for (int i = 1; i < 10; i++)
//    {
//        printf("%d x %d = %d\n", dan, i, dan*i);
//    }

    int i = 1;

    while(i < 10)
    {
        printf("%d x %d = %d\n", dan, i, dan*i);
        i++;
    }


    // 무한루프 while true, for(; ;)
    // 따로 bool 타입이 있는게 아니라 조건문이 true면 1, false면 0이 반환된다
    // 0을 제외한 모든 수는 참이다, while(-1), while(100) 둘다 무한 루프




    return 0;
}