#include <stdio.h>

int main(void)
{
    for (int i = 2; i < 10; i++)
    {
        printf("제 %d단\t\t", i);
    }
    printf("\n");


    for (int i = 1; i < 10; i++)
    {
        for (int j = 2; j < 10; j++)
        {
            printf("%d x %d = %d\t", j, i, i*j);
        }
        printf("\n");
    }










    return 0;
}