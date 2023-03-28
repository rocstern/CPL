#include <stdio.h>

int main(void)
{
    float weight, height, bmi_stat;

    printf("< 비만도 판정 기계 >\n");


    printf("키(cm) 입력: ");
    scanf(" %f", &height);

    printf("체중(kg) 입력: ");
    scanf(" %f", &weight);

    bmi_stat = weight / ((height / 100) * (height / 100));

    if (bmi_stat >= 25)
    {
        printf("당신은 비만 입니다.");
    }
    if (bmi_stat >= 23 && bmi_stat < 25)
    {
        printf("당신은 과체중 입니다.");
    }
    if (bmi_stat >= 18.5 && bmi_stat < 23)
    {
        printf("당신은 정상 체중 입니다.");
    }
    if (bmi_stat < 18.5)
    {
        printf("당신은 저체중 입니다.");
    }



}