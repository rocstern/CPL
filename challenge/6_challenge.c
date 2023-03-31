#include <stdio.h>


void sortDes(int * arr, int len)
{
    int temp;
    for (int i = len -1; i > 0; i--)
    {
        for(int j = 0; j < i; j++)
        {
            if(arr[j] < arr[j+1])
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
    int arr[7] =  {};
    int len = sizeof(arr) / sizeof(int);

    for (int i = 0; i < len; i++)
    {
        printf("입력:");
        scanf("%d", &arr[i]);
    }

    sortDes(arr, len);

    for (int i = 0; i < len; i++)
    {
        printf("%d, ", arr[i]);
    }

}
