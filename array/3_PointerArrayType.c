#include <stdio.h>


void MaxAndMin(int * arr, int len, int ** maxPtr, int ** minPtr)
{
    int max = arr[0];
    int min = arr[0];

    for (int i = 0; i < len; i++)
    {
        if (max < arr[i])
            *maxPtr = &arr[i];
        if (min > arr[i])
            *minPtr = &arr[i];
    }
}


int main(void)
{
//    int num1 = 10, num2 = 20, num3 = 30;
//    int * ptr1 = &num1;
//    int * ptr2 = &num2;
//    int * ptr3 = &num3;
//
//    int *ptrArr[] = {ptr1, ptr2, ptr3};
//    int **dptr = ptrArr;
//
//    printf("%d %d %d \n", *(ptrArr[0]), *(ptrArr[1]), *(ptrArr[2]));
//    printf("%d %d %d \n", *(dptr[0]), *(dptr[1]), *(dptr[2]));


    int arr[5] = {2, 5, 1, 7, 9};
    int * maxPtr;
    int * minPtr;
    int len = sizeof(arr) / sizeof(int);


    MaxAndMin(arr, len, &maxPtr, &minPtr);

    printf("%p\t%p\n\n", &arr[2], &arr[4]);
    printf("%p\t%p\n", minPtr, maxPtr);


















    return 0;
}