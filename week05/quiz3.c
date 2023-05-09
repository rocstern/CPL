#include <stdio.h>

int main(void)
{
    int en_Pow, en_EM, en_Cir, en_Ele, en_EIns;
    float avg_scr;

    printf(" < 전기기사 자격증 합격 계산기 입니다. > \n");

    printf("전력공학 점수:");
    scanf(" %d", &en_Pow);

    printf("전기기기 점수:");
    scanf(" %d", &en_EM);

    printf("회로제어 점수:");
    scanf(" %d", &en_Cir);

    printf("전자기학 점수:");
    scanf(" %d", &en_Ele);

    printf("전기설비 점수:");
    scanf(" %d", &en_EIns);

    avg_scr = (float)(en_Pow + en_EM + en_Cir + en_Ele + en_EIns) / 5;


    // 평균점수가 60점 미만 이거나 각 과목 점수가 40점 미만 일때
    if(avg_scr < 60 || en_Pow < 40 || en_EM < 40 || en_Cir < 40 || en_Ele < 40 || en_EIns < 40)
    {
        printf("불합격 입니다!. \n");
    }
    else
    {
        printf("합격 입니다!.\n");
    }




    return 0;
}