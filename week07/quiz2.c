#include <stdio.h>

int main(void)
{
    int age;

    printf("나이 입력:");
    scanf("%d", &age);


    if(age >= 0 && age <= 4)
        printf("영유아 입니다.\n");
    else if(age >= 5 && age <= 7)
        printf("유치원생 입니다.\n");
    else if(age >= 8 && age <= 13)
        printf("초등학생 입니다.\n");
    else if(age >= 14 && age <= 16)
        printf("중학생 입니다.\n");
    else if(age >= 17 && age <= 19)
        printf("고등학생 입니다.\n");
    else
        printf("성인 입니다.\n");






    return 0;
}