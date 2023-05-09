#include <stdio.h>

int main(void)
{
    int line;

    printf("몇줄:");
    scanf("%d", &line);

    for (int i = 0; i < line; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("[%d]", j+1);
        }
        printf("\n");
    }












    return 0;
}