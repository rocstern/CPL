#include <stdio.h>

int main(void)
{
    int line;

    printf("몇줄:");
    scanf("%d", &line);

    for (int i = 0; i < line; i++)
    {
        for (int j = line; j > i ; j--)
        {
            printf("*");
        }
        printf("\n");
    }











    return 0;
}