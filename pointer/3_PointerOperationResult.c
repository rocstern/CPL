#include <stdio.h>

int main(void)
{
    int *ptr1 = (int *) 0x0010;
    double *ptr2 = (double *) 0x0010;

    printf("%d \n", 0x0010);

    printf("%p %p \n", ptr1+1, ptr1 +2); // 4증가 8증가
    printf("%p %p \n", ptr2+1, ptr2 +2); // 8증가 16증가

    printf("%p %p \n", ptr1, ptr2);
    ptr1++; // 4가 증가
    ptr2++; // 8이 증가
    printf("%p %p \n", ptr1, ptr2);


    return 0;
}