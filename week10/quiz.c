#include <stdio.h>

int main(void)
{
    // 학생들의 C언어 점수를 입력 받아 평균 점수ㅜ를 계산하여 출력
    // 10명 학생, 평균점수ㅡㄴ 소숫점 한자리까지
    // 100점 만점

    float avg_score = 0.0;
    int sum_score = 0;
    int scores[10];

    // 10회 입력 받기
    for (int i = 0; i < 10; i++)
    {
        printf("%d번째 학생 점수 입력:", i+1);
        scanf("%d", &scores[i]);
    }

    // 평균 께산
    for (int i = 0; i < 10; i++)
    {
        sum_score += scores[i];
    }

    avg_score = (float)sum_score / 10;

    printf("평균점수: %.1f\n", avg_score);


    return 0;
}