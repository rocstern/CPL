#include <stdio.h>

int main(void)
{
    int oriArr[2][2];
    float revArr[2][2];

    float det;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d행%d열 요소 입력: ", i+1, j+1);
            scanf(" %d", &oriArr[i][j]);
        }
    }

    // 행렬식 역수 계산
    det = 1.0 / ((oriArr[0][0] * oriArr[1][1]) - (oriArr[0][1] * oriArr[1][0]));
    printf("%.2f\n", det);

    revArr[0][0] = det * oriArr[1][1];

    revArr[0][1] = -1 * det * oriArr[0][1];

    revArr[1][0] = -1 * det * oriArr[1][0];

    revArr[1][1] = det * oriArr[0][0];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%.2f\t", revArr[i][j]);
        }
        printf("\n");
    }

    return 0;
}