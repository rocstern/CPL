#include <stdio.h>

int main(void)
{
    // 한 종류의 변수를 여러개 만들때 사용

/*
    int a[3];

    a[0] = 100;
    a[1] = 200;
    a[2] = 300;

    printf("%d\n", a[0]);
    printf("%d\n", a[1]);
    printf("%d\n", a[2]);
*/

/*
    int b[10];
    int num;
    
    for (int i = 0; i < 10; i++)
    {
        printf("%d번째 값 입력:", i+1);
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", b[i]);
    }
*/


    float GPA[10];

//    GPA[0] = 4.3;
//    GPA[1] = 3.5;
//    GPA[2] = 2.7;
//
//    printf("%.1f\n", GPA[0]);
//    printf("%.1f\n", GPA[1]);
//    printf("%.1f\n", GPA[2]);

    for (int i = 0; i < 10; i++)
    {
        printf("%d번째 학생 성적 입력:", i+1);
        scanf("%f", &GPA[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d번째 학생 성적: %.1f\n", i+1, GPA[i]);
    }















    return 0;
}