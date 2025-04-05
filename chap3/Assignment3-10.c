/* 파일명: assignment3-10.c
 * 내용: 원/달러 환율과 달러를 입력받아 몇 원인지 출력하는 프로그램을 작성하시오.
 * 작성자: 윤우진
 * 날짜: 2025.04.06
 * 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void change (void);

int main()
{
	change();
	return 0;
}

void change (void)
{
	float USD, KRW_to_USD, KRW;
	printf("USD? ");
	scanf("%f", &USD);
	printf("원/달러 환율? ");
	scanf("%f", &KRW_to_USD);
	KRW = USD * KRW_to_USD;
	printf("USD %.2f = KRW %.2f", USD, KRW);
	return;
}