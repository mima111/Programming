/* 파일명: assignment3-07.c
 * 내용: 실수값을 입력받아 그 값의 제곱과 세제곱을 출력하는 프로그램을 작성하시오. 
 * 실수값을 입력받을 떄는 12.34처럼 소수 표기 방법이나 1.234e2처럼 지수표기 방법을 둘 다 사용 할 수 있게 하고 제곱과
 * 세제곱을 출력할 때는 지수 표기방법으로 출력하시오.
 * 작성자: 윤우진
 * 날짜: 2025.04.06
 * 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void f();

int main()
{
	f();
	return 0;
}

void f (void)
{
	float f1;
	printf("실수? ");
	scanf("%f", &f1);
	printf("제곱: %e\n", f1 * f1);
	printf("세제곱: %e", f1 * f1 * f1);
	return;
}