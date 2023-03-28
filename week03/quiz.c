#include <stdio.h>

int main()
{
    //char blood_type;
    //
    //printf("혈액형 입력: ");
    //scanf("%c", &blood_type);
    //printf("%c형", blood_type);

    //int kor_score, eng_score, math_score;
    //float avg_score;

    //printf("국어 점수 입력: ");
    //scanf("%d", &kor_score);

    //printf("수학 점수 입력: ");
    //scanf("%d", &eng_score);

    //printf("영어 점수 입력: ");
    //scanf("%d", &math_score);

    //avg_score = (kor_score + eng_score + math_score) / 3.0;

    //printf("평균 점수: %.1f ", avg_score);


    int std_id, std_age;
    float std_height;
    char std_blood_type;

    printf(" < 신상 관리 프로그램 > \n");

    printf("학번 입력: ");
    scanf("%d", &std_id);

    printf("나이 입력: ");
    scanf("%d", &std_age);

    printf("키 입력: ");
    scanf("%f", &std_height);

    printf("혈액형 입력: ");
    scanf(" %c", &std_blood_type);

    // 이상하게 scanf 무시될때가 있는데 " %d", int 이런식으로 칸을 띄우면 해결된다
    // 이유는 모름

    printf("\n\n");

    printf("학번: %d\n", std_id);
    printf("나이: %d\n", std_age);
    printf("키: %.1fcm\n", std_height);
    printf("혈액형: %c", std_blood_type);




















}