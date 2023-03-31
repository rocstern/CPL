#include <stdio.h>

void printEvenNum(int param[], int len)
{
    printf("짝수 출력: ");
    int i;
    for(i = 0; i < len; i++)
    {
        if (param[i] % 2 == 0)
            printf("%d, ", param[i]);
    }
}

void printOddNum(int * arr, int len)
{
    printf("홀수 출력: ");
    int i;
    for(i = 0; i < len; i++)
    {
        if (arr[i] % 2 == 1)
            printf("%d, ", arr[i]);
    }



}


int main(void)
{
    int arr[10];
    int arr_size = sizeof(arr) / sizeof(int);

    for(int i = 0; i < arr_size; i++)
    {
        int temp;
        printf("입력:");
        scanf(" %d", &temp);
        arr[i] = temp;
    }

    printEvenNum(arr, arr_size);
}