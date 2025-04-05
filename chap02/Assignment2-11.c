/* 파일명: assignment11.c
* 내용: PA11. 원/달러 환율과 원화를 입력받아 몇 달러인지 출략하는 프로그램을 작성하시오.
* 작성자: 윤우진
* 날짜: 2025.3.26
* 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void exchange2(void);

int main()
{
	exchange2();

	return 0;
}


void exchange2(void)
{
	int KRW;
	float USD;
	KRW = 0;
	USD = 0;

	printf("KRW ? ");
	scanf("%d", &KRW);
	printf("원/달러 환율? ");
	scanf("%f", &USD);
	printf("KRW %d = USD %.2f", KRW, (float)KRW / USD);

	return;
}
