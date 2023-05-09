#include <stdio.h>

int main(void)
{
    /*
     *  정수 입력값의 절대값을 전달해주는 프로그램
     */

    int input_num, absolute_val;

    printf("< 절대값을 반환하는 프로그램 입니다. >\n");

    printf("정수 입력:");
    scanf(" %d", &input_num);

    if(input_num >= 0)
        absolute_val = input_num;
    else
        absolute_val = -(input_num);

    printf("절대값: %d\n", absolute_val);

    return 0;
}