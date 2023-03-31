#include <stdio.h>

void SwapByValue(int n1, int n2)
{
    int temp = n1;
    n1 = n2;
    n2 = temp;
    printf("n1 : n2 = %d : %d\n", n1, n2);
}

void SwapByReference(int *ptr1, int *ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}





int main()
{
    int num1 = 10;
    int num2 = 20;
    printf("num1 : num2 = %d : %d\n", num1, num2);

    SwapByValue(num1, num2);

    printf("num1 : num2 = %d : %d\n", num1, num2);
    printf("\n\n");

    SwapByReference(&num1, &num2);
    printf("num1 : num2 = %d : %d\n", num1, num2);




}