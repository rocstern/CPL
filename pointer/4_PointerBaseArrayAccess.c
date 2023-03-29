#include <stdio.h>

int main(void)
{
    int arr[3] = {11, 22, 33};
    int *ptr = arr;
    printf("%d %d %d \n", *ptr, *(ptr+1), *(ptr+2));

    printf("%d \n", *ptr); ptr++; // ptr = &arr[1]
    printf("%d \n", *ptr); ptr++; // ptr = &arr[2]
    printf("%d \n", *ptr); ptr--;
    printf("%d \n", *ptr); ptr--;
    printf("%d \n", *ptr);

    printf("끝\n");

//    *(++ptr) = 20; // ptr 변수가 기존 &arr[0]에서 &arr[1] 로 변함
//    *(ptr+1) = 30;

    printf("%d %d %d \n", *(ptr+0), *(ptr+1), *(ptr+2));
    printf("%d %d %d \n", ptr[0], ptr[1], ptr[2]);
    printf("%d %d %d \n", *(arr+0), *(arr+1), *(arr+2));
    printf("%d %d %d \n", arr[0], arr[1], arr[2]);

    // conclusion
    // arr[i] == *(arr+i)


    return 0;
}