#include <stdio.h>

int main(void)
{
    char str1[] = "My String"; // 변수형태의 문자열
    char * str2 = "Your String"; // 상수형태의 문자열 printf("문자열") 과 비슷하다
    // printf도 char * str 형태로 받아서 사용하며 문자열은 일단 메모리 공간에 저장된 후 첫글자의 주소만 반환된다
    printf("%s %s \n", str1, str2);

    str2 = "Our String";
    printf("%s %s \n", str1, str2);

    str1[0] = 'X';  // 변경 가능
//    str2[0] = 'X'; // 변경 불가능
    printf("%s %s \n", str1, str2);

    printf("%p \n", str1);

    printf(str1);



    return 0;
}


