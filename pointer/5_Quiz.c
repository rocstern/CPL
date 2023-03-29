#include <stdio.h>

int main(void)
{

    /* 300p 문제 1번
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    printf("sizeof(arr) = : %d \n", sizeof(arr));

    for(int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        *ptr++ += 2;
//        ptr += 1;xw
    }

    ptr = ptr - 5;

    for(int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        printf("index %d: *ptr은 %d \n", i, *ptr++);
    }
    */

    /* 300p 문제 2번
    int arr[5] = {10, 20, 30, 40, 50};
    int *arr_ptr = arr;

    for(int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        *arr_ptr += 2;
        arr_ptr += 1;
    }

    arr_ptr -= 5;

    for(int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        printf("*arr_ptr+%d: %d \n", i, *(arr_ptr+i));
    }
    */

    /* 300p 3번 문제
    int arr[5] = {1, 2, 3, 4, 5,};
    int *arr_ptr = &arr[4];
    int sum = 0;

    for(int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        sum += *(arr_ptr - i);
    }

    printf("total sum of arr val: %d", sum);
    */


    /* 300p 문제 4번
    int arr[6] = {1, 2, 3, 4, 5 ,6 };

    for(int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        *(arr+i) = (int)((sizeof(arr) / sizeof(int))) - i;
    }

    for(int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        printf("*(arr+i): %d \n", *(arr+i));
    }
    */

    return 0;
}