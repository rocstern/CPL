#include <stdio.h>

void turn90Degree(int arr[][4], int column)
{
    int temp[4][4] = {};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            temp[i][j] = arr[i][j];
        }

    }
    // 전체조건을 잘 따지자
    // (1,1)이 어디로 이동하는가 중요한게 아니다
    // (1,1)에 무엇이 오는지가 중요하다

    int col, row;
    col = 0;

    for (int i = 0; i < 4; i++)
    {
        row = 0;
        for (int j = 3; j >= 0; j--)
        {
            arr[col][row++] = temp[j][i];
        }
        col++;
    }
}

int main(void)
{
    int arr[4][4] = {
            1, 2, 3, 4,
            5, 6, 7, 8,
            9, 10, 11, 12,
            13, 14, 15, 16
    };


    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }


    printf("\n\n");
    turn90Degree(arr, 4);

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }



    return 0;
}