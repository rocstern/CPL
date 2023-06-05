#include <stdio.h>

int main(void)
{

    // 행은 학생 열은 중간 기말 점수인 배열
    int point[3][2] = {};

    // 중간 기말 점수 합산
    int sum_mid = 0, sum_final = 0;

    // 중간, 기말 평균 점수 배열
    float avg_mid, avg_final;

    // 반영 비율
    float ratio_mid = 0.5, ration_final = 0.5;

    // 각 학생 총점
    float total[3] = {};

    // 각 학생 등급 배열
    char grade[3] = {};



    for (int i = 0; i < 3; i++)
    {
        printf("%d번째 학생의 중간, 기말 점수를 한줄로 입력: ", i+1);
        scanf("%d %d", &point[i][0], &point[i][1]);

    }

    for (int i = 0; i < 3; i++)
    {
        sum_mid += point[i][0];
        sum_final += point[i][1];
    }

    avg_mid = (float)sum_mid / 3;
    avg_final = (float)sum_final / 3;

    printf("중간고사 평균 점수 %.1f\n", avg_mid);
    printf("기말고사 평균 점수 %.1f\n", avg_final);


    for (int i = 0; i < 3; i++)
    {
        total[i] = (point[i][0] * ratio_mid) + (point[i][1] * ration_final);
    }


    // 1등에게 A주기 코드
    if(total[0] > total[1] && total[0] > total[2])
        grade[0] = 'A';
    else if(total[1] > total[0] && total[1] > total[2])
        grade[1] = 'A';
    else if(total[2] > total[0] && total[2] > total[1])
        grade[2] = 'A';


    // 2등에게 B주기
    if((total[0] > total[1] && total[0] < total[2]) || total[0] > total[2] && total[0] < total[1])
        grade[0] = 'B';
    else if((total[1] > total[0] && total[1] < total[2]) || (total[1] > total[2] && total[1] < total[0]))
        grade[1] = 'B';
    else if((total[2] > total[0] && total[2] < total[1]) || (total[2] > total[1] && total[2] < total[0]))
        grade[2] = 'B';

    // 3등에게 C주기
    if(total[0] < total[1] && total[0] < total[2])
        grade[0] = 'C';
    else if(total[1] < total[0] && total[1] < total[2])
        grade[1] = 'C';
    else if(total[2] < total[0] && total[2] < total[1])
        grade[2] = 'C';



    for (int i = 0; i < 3; i++)
    {
        printf("%d번째 학생의 학점(등급): %c\n", i+1, grade[i]);
    }


    return 0;
}