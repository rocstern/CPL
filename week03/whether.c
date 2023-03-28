#include <stdio.h>

int main()
{
    int age;
    printf("만 나이 입력:");
    scanf(" %d", &age);


    if (age >= 19)
    {
        printf("성인 입니다.\n");
        printf("술을 마셔도 됩니다.\n");
    }
    else
    {
        printf("미성년자 입니다.\n");
        printf("술을 마시면 안됩니다.\n");
    }




}