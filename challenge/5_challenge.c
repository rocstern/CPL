#include <stdio.h>

void bubble(int * arr, int len)
{
    int temp;
    for(int i = len-1; i > 0; i--)
    {
        for(int j = 0; j < i; j ++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}






int main(void)
{
    // 6, 5, 3, 7

    int arr[] = {6, 7, 5, 3, 40, 2, 4, 1, 12, 567, 38, 1};

    int len = sizeof(arr) / sizeof(int);

    bubble(arr, len);

    for (int i = 0; i < len; i++)
    {
        printf("%d,", arr[i]);
    }


}