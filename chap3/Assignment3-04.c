/* 파일명: assignment3-04.c
 * 내용: 물체에 작용한 힘의 크기와 힘의 방향으로 이동한 거리를 입력받아 일의 양을 구하는 프로그램을 작성하시오.
 * 힘의 크기는 N 단위로 입력받고, 이동한 거리는 m 단위로 입력받는다.
 * 작성자: 윤우진
 * 날짜: 2025.04.06
 * 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void work(void);

int main()
{
	work();
	return 0;
}

void work(void)
{
	float force, distance, work;
	printf("힘(N) ? ");
	scanf("%f", &force);
	printf("이동한 거리(m) ? ");
	scanf("%f", &distance);
	work = force * distance;
	printf("일의 양: %.2f J", work);
	return;
}
