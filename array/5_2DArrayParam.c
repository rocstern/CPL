#include <stdio.h>


void showArr2DStyle(int arr[][4], int colum)
{
    for (int i = 0; i < colum; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }



}

int main(void)
{
    int arr[] = {1, 2, 3, 5, 5};









    return 0;
}