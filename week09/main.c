#include <stdio.h>

int main(void)
{
//    int dan;
//
//    printf("몇 단?");
//    scanf("%d", &dan);
//
//    for (int i = 1; i < 10; i++)
//    {
//        printf("%d x %d = %d\n", dan, i, dan * i);
//    }





    // 2중 for문

//    for (int i = 2; i < 10; i++)
//    {
//        printf("### %d단 ###\n", i);
//        for (int j = 1; j < 10; j++)
//        {
//            printf("%d x %d = %d \n", i, j, i * j);
//        }
//        printf("\n");
//    }


    for (int i = 2; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            printf("%2d x %2d = %2d\t", j, i, i*j);
        }
        printf("\n");
    }





    return 0;
}