#include <stdio.h>

int main(void)
{
//    int arr[3][9] = {};
//
//    for (int i = 0; i < 9; i++)
//    {
//        arr[0][i] = 2 * (i+1);
//        arr[1][i] = 3 * (i+1);
//        arr[2][i] = 4 * (i+1);
//    }
//
//    for (int i = 0; i < 3; i++)
//    {
//        for (int j = 0; j < 9; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }




    int arr1[2][4] = {1, 2, 3, 4, 5, 6, 7 ,8};

    int arr2[4][2] = {};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            arr2[i][j] = arr1[j][i];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
















    return 0;
}