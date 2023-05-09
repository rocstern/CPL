#include <stdio.h>

int main(void)
{
    int won;
    char to_wat;
    float ex_dollor, ex_yen, ex_euro;
    ex_dollor = 1322.5;
    ex_yen = 9.94;
    ex_euro = 1436.24;

    printf("원화 금액 입력:");
    scanf(" %d", &won);

    printf("변환할 통화 기호(U 달러, J 옌, E 유로):");
    scanf(" %c", &to_wat);

    switch(to_wat)
    {
        case ('U'):
            printf("환산된 금액: %.1f 달러\n", (float)won / ex_dollor);
            break;
        case('J'):
            printf("환산된 금액: %.1f 옌\n", (float)won / ex_yen);
            break;
        case('E'):
            printf("환산된 금액: %.1f 유로\n", (float)won / ex_euro);
            break;
    }


    return 0;
}