#include <stdio.h>

void addFromFront(int *arr, int len, int num)
{
    for(int i = 0; i < len; i++)
    {
        if (arr[i] == '\0')
        {
            arr[i] = num;
            printf("arr[i]: %d\n", arr[i]);
            break;

        }
    }
}

void addFromBack(int arr[] , int len, int num)
{
    for(int i = len - 1; i >= 0; i--)
    {
        if(arr[i] == '\0')
        {
            arr[i] = num;
            printf("arr[i]: %d\n", arr[i]);
            break;
        }
    }
}

void showAllElem(int arr[], int len)
{
    printf("배열 요소 출력: ");
    for(int i = 0; i < len; i++)
    {
        printf("%d, ", arr[i]);
    }
}

int main(void)
{
    int arr[10] = {};
    int arr_size = sizeof(arr) / sizeof(int);

    for(int i = 0; i < arr_size; i++)
    {
        int num;
        printf("입력:");
        scanf("%d", &num);
        if (num % 2 == 0)
            addFromFront(arr, arr_size, num);
        else
            addFromBack(arr, arr_size, num);
    }

    showAllElem(arr, arr_size);

}