#include <stdio.h>

int main(void)
{
    int total;
    int arr[4][2] = {};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d층 %d호 인구수: ", i+1, j+1);
            scanf(" %d", &arr[i][j]);
        }
    }

    for (int i = 0; i < 4; i++)
    {
        total = 0;
        total += arr[i][0];
        total += arr[i][1];
        printf("%d층 인구수: %d명", i+1, total);
    }



    return 0;
}