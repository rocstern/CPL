#include <stdio.h>


int main()
{
    int a;
    printf("a값 입력:");
    scanf(" %d", &a);

    switch(a)
    {
        case 10:
            printf("a = 10");
            break;
        case 20:
            printf("a = 20");
            break;
        case 30:
            printf("a = 30");
            break;
        default:
            printf("a 값 오류");
            break;
    }





}