 /* 파일명: assignment07.c
 * 내용: PA07. 실수값을 입력받아 그 값의 제곱과 세제곱을 출력하는 프로그램을 작성하시오.
 * 실수값을 입력받을 때는 12.34처럼 소수 표기 방법이나 1.234e처럼 지수 표기 방법을 둘 다 사용할 수 있게 하고 
 * 제곱과 세제곱을 출력할 떄는 지수표기 방법으로 출력하시오.
 * 
 * 작성자: 윤우진
 * 날짜: 2025.3.26
 * 버전: v1.0
 */
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void f_print (void);


int main()
{
	f_print();

	return 0;
}

void f_print(void)
{
	float f;
	printf("실수? ");
	scanf("%f", &f);
	printf("제곱: %e\n", f * f);
	printf("세제곱: %e", f * f * f);

	return;
}