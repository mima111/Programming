/* 파일명: assignment10.c
* 내용: PA10. 원/달러 환율과 달러를 입력받아 몇 원인지 출략하는 프로그램을 작성하시오.
* 작성자: 윤우진
* 날짜: 2025.3.26
* 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void exchange(void);


int main()
{
	exchange();

	return 0;
}

void exchange(void)
{
	float USD;
	float KRW;

	USD = 0;
	KRW = 0;

	printf("USD? ");
	scanf("%f", &USD);
	printf("원/달러 환율? ");
	scanf("%f", &KRW);
	printf("USD %.2f = KRW %.2f", USD, USD * KRW);

	return;

}