#include <stdio.h>

void ShowArrayElem(int * param, int len)
{
    int i;
    for (i = 0; i < len; i++)
    {
        printf("%d ", param[i]);
    }
    printf("\n");
}

void AddArrayElem(int * param, int len, int add)
{
    int i;
    for (i = 0; i < len; i++)
    {
        param[i] += add;
    }
}


int main()
{
    int arr1[3] = {1, 2,3};
    int arr2[5] = {4, 5, 6, 7, 7};

    AddArrayElem(&arr1, sizeof(arr1) / sizeof(int), 1);
    ShowArrayElem(arr1, sizeof(arr1) / sizeof(int));

    AddArrayElem(arr1, sizeof(arr1) / sizeof(int), 1);
    ShowArrayElem(arr1, sizeof(arr1) / sizeof(int));

    AddArrayElem(arr1, sizeof(arr1) / sizeof(int), 1);
    ShowArrayElem(arr1, sizeof(arr1) / sizeof(int));

    printf("%d", arr1[0]);
    printf("%d", arr2[0]);
}