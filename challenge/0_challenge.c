#include <stdio.h>

//void getArrayValue(int * arr)
//{
//    for (int i = 0; i < 5; i++)
//    {
//        (arr+i) = 11;
//    }
//}

int main(void)
{

    int arr[3][4] = {
            1, 2, 3, 4,
            5, 6, 7, 8,
            9, 10, 11, 12
    };

    int (*pArr)[4] = arr;
//    int testpoint[][4]; 매개변수 선언때만 사용 가능하다


    int * pArr1 = arr[0];
    int * pArr2 = arr[1];
    int pArr3 = arr[2][0];
    int * pArr4 = &arr[2][0];


    int num1 = 1;
    int num2 = 2;
    int num3 = 3;
    int num4 = 4;
    int num5 = 5;

    int * intArr[5] = {&num1, &num2, &num3, &num4, &num5};

    int ** dptr = intArr;

    int arr1D[] = {1, 2, 3, 4};
    int * ptr1D = &arr1D[0];



    char str[] = "String";
    char * strArr[] = {str, "Array", "Pointer"};

    printf("%p \n", str);
    printf("%p \n", strArr[0]);
    printf("%p \n", strArr);

    char * str1 = str;
    char * str2 = strArr[0];
    char ** str3 = strArr;


    int testArr[4][4] = {};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", testArr[i][j]);
        }
        printf("\n");
    }










    return 0;
}