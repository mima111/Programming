/* 파일명: assignment4-1.c
 * 내용: 질량과 속력을 입력받아 운동 에너지를 구하는 프로그램을 작성하시오. 
   질량은 kg 단위, 속력은 m/s 단위로 입력받는다.
 * 작성자: 윤우진
 * 날짜: 2025.04.09
 * 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void speed(void);

int main()
{

	speed();

}

void speed(void)
{
	double kg, ms, energy;
	printf("질량(kg)? ");
	scanf("%lf", &kg);
	printf("속력(m/s)? ");
	scanf("%lf", &ms);
	
	energy = ((kg / 2) * (ms * ms));

	printf("운동에너지: %.2f J", energy);

	return;
}