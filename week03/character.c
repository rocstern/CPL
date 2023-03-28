#include <stdio.h>

int main(void)
{
    // 아스키 코드 0-127 American Standard Code for Infomation Interchange
    // 65 ~ 90, A ~ Z
    // 97 ~ 122 a ~ z
    // char 은 8비트, 1바이트 크기의 메모리를 사용해 저장한다
    // char == character

    // 변수 선언
    char c1;
    // 변수 초기화
    c1 = 'W';

    char c2 = 'K';
    char c3 = 'U';

    char c4, c5, c6;

    // 이렇게 초기화도 할 수 있다
    c4 = c5 = c6 = 'A';


    printf("%c%c%c \n", c1, c2, c3);

    // 자바랑 다르게 이건 안됨
    //printf(c1 + c2 + c3);

    printf("%c%c%c \n", 87, 75, 85);

    printf("%c%c%c \n", c1 + 32, c2 + 32, c3 + 32);

    // 1비트 == 1/0 데이터 표현이 가능하니
    // 1바이트 == 2^8, 256 가지의 표현이 가능하다


    // char 데이터는 숫자로 저장되기 때문에 이런식으로도 출력이 가능하다
    char c7;
    c7 = 'A';
    printf("%d \n", c7);

    int c8 = 65;
    printf("%c \n", c8);

    char c9;
    c9 = 65;
    printf("%c\n", c9 + 32);

    char c10 = '?';
    printf("%d\n", c10);

    //ISTJ

    char mbti1, mbti2, mbti3, mbti4;
    mbti1 = 'I';
    mbti2 = 'S';
    mbti3 = 'T';
    mbti4 = 'J';

    printf("%c%c%c%c\n", mbti1, mbti2, mbti3, mbti4);


    // String 문자열 2개 이상의 나열, 문자형 배열
    char char_array[10] = "ISTJ";
    printf("%s\n\n", char_array);

    //int d1;
    //scanf("%d", &d1); // 주소연산자 &
    //printf("%d", d1);


    char c11;
    scanf("%c", &c11);
    printf("%c", c11);




























    return 0;
}