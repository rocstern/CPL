#include <stdio.h>

void returnInt(int num)
{
    num += 9;
    printf("returnInt 숫자+9: %d\n", num);
}


void SimpleFunc(int * param, int len)
{
    for(int i = 0; i < len; i++)
    {
        printf("%d\t %p\n", param[i], param[i]);
    }
}



int main(void)
{
    int number = 10;
    returnInt(number);

    printf("main number: %d\n", number);

    int arr[3] = {1 ,2 ,3};
    int len = sizeof(arr) / sizeof(int);

    for(int i = 0; i < len; i++)
    {x
        printf("%d\t %p\t %p\t %p \n", arr[i], &arr[i], arr, 4);
    }

    SimpleFunc(arr, len);



    return 0;
}

