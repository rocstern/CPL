#include <stdio.h>

/*
    01  02  03  04
    12  13  14  05
    11  16  15  06
    10  09  08  07


    01  02  03  04  05
    16  17  18  19  06
    15  24  25  20  07
    14  23  22  21  08
    13  12  11  10  09
 */


void makeSpiralArray(int size)
{

    int arr[10][10] = {};

    int row = 0, col = 0;

    // 1 = row++, 2 = col++, 3 = row--, 4 = col--, 5 = break;
    int mode = 1;

    for (int i = 0; i < size * size; i++)
    {
        arr[col][row] = i + 1;
        switch(mode)
        {
            case 1:
                // row+1이 사이즈보다 크거나 같거나 다음 row+1 자리가 0이 아니면
                if(row+1 >= size || arr[col][row+1] != 0)
                {
                    mode = 2;
                    col++;
                    break;
                }
                row++;
                break;
            case 2:
                if (col+1 >= size || arr[col+1][row] != 0)
                {
                    mode = 3;
                    row--;
                    break;
                }
                col++;
                break;
            case 3:
                if (row -1 < 0 || arr[col][row-1] != 0)
                {
                    mode = 4;
                    col--;
                    break;
                }
                row--;
                break;
            case 4:
                if (col - 1 < 0 || arr[col-1][row] != 0)
                {
                    mode = 1;
                    row++;
                    break;
                }
                col--;
                break;
        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }


}

int main(void)
{

    int num;

    printf("숫자를 입력하시오: ");
    scanf(" %d", &num);

    makeSpiralArray(num);







    return 0;
}