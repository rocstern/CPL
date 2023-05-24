#include <stdio.h>

int main(void)
{
//    int arr[3][2] = {
//            {100, 200},
//            {300, 400},
//            {500, 600}
//    };

//    int arr[3][4];

/*
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d행%d열 요소를 입력: ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }
*/


    int arr1[2][2];
    int arr2[2][2];

    int arr3[2][2];

    printf("첫번째 행렬 입력\n");
    for (int i = 0; i < 2; i++)
    {
        printf("%d행 요소 입력: ", i+1);
        scanf("%d %d", &arr1[i][0], &arr1[i][1]);
    }

    printf("두번째 행렬 입력\n");
    for (int i = 0; i < 2; i++)
    {
        printf("%d행 요소 입력: ", i+1);
        scanf("%d %d ", &arr2[i][0], &arr2[i][1]);
    }



/*
    for (int col = 0; col < 2; col++)
    {
        for (int row = 0; row < 2; row++)
        {
            printf("%2d\t", arr[col][row]);
        }
        puts("\n");
    }*/


    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }


    for (int col = 0; col < 2; col++)
    {
        for (int row = 0; row < 2; row++)
        {
            printf("%d\t", arr3[col][row]);
        }
        puts("\n");
    }


    return 0;
}