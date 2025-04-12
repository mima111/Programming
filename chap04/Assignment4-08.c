/* 파일명: assignment4-08.c
 * 내용: 반지름의 길이를 입력받아 구의 부피를 구하는 프로그램을 작성하시오.
 * 이때 파이는 3.141592라고 하자
 * 작성자: 윤우진
 * 날짜: 2025.04.11
 * 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define PI 3.141592
double Assignment0408(void);
double v(double r);

int main()
{
	Assignment0408();
	return 0;
}

double Assignment0408(void)
{
	double total;
	double r;

	r = 0.0;
	total = 0.0;

	printf("반지름의 길이? ");
	scanf("%lf", &r);

	total = v(r);
	printf("구의 부피: %lf", total); 
	return total;
}

double v(double r)
{
	double ve;
	ve = (4.0 / 3.0) * PI * r * r * r;

	return ve;
}