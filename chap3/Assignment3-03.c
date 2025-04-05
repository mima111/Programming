/* 파일명: assignment3-03.c
 * 내용: 질량과 높이를 입력받아 위치 에너지를 구하는 프로그램을 작성하시오. 질량은 kg, 높이는 m 단위로 입력받는다.
 * 작성자: 윤우진
 * 날짜: 2025.04.06
 * 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void potential_energy(void);

int main()
{
	potential_energy();
	return 0;
}

void potential_energy(void)
{
	float kg, height, potential_energy;
	printf("질량(kg) ? ");
	scanf("%f", &kg);
	printf("높이(m) ? ");
	scanf("%f", &height);
	potential_energy = kg * 9.8 * height;
	printf("위치 에너지: %f J", potential_energy);
	return;
}