/* 파일명: assignment09.c
* 내용: PA09. 무게를 파운드(lb)러 입력받아 킬로그램(kg)으로 변환해서 출력하는 프로그램을 작성하시오. 1 lb는 0.45359237kg에 해당한다.
* 작성자: 윤우진
* 날짜: 2025.3.26
* 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void lb(void);

int main()
{
	lb();

	return 0;
}

void lb(void)
{
	int pound;
	printf("무게(ld) ? ");
	scanf("%d", &pound);
	printf("%d ld = %f kg", pound, (float)pound * 0.45359237);

	return;
}