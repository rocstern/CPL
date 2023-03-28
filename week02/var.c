#include <stdio.h>


int main(void)
{
    //// '=' 는 '같다'의 의미가 아닌 대입, 할당의 의미이다
    ////int std_num;
    ////std_num = 20232031;
    //int std_num = 20232031;


    //// '%' 출력서식
    ////d: decimal 십진정수, x: 16진법, o: 8진법
    //printf("%d", std_num);

    int age;
    printf("만 나이를 입력하세요: ");
    scanf("%d", &age);
    printf("\n");
    printf("입력한 나이: %d", age);



}