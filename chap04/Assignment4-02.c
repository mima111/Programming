/* 파일명: assignment4-02.c
 * 내용: 화씨 온도를(*f)를 실수로 입력받아 섭씨 온도(*c)로 변환해서 출력하는 프로그램을 작성하시오.
 * 섭씨 온도 = (화씨 온도-32)* 5 / 9
 * 작성자: 윤우진
 * 날짜: 2025.04.11
 * 버전: v1.0
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0402(void);
double f1 (double fi);


int main()
{
	Assignment0402();
	return 0;
}

void Assignment0402(void)
{
	double fi, ci = 0.0;
	printf("화씨온도? ");
	scanf("%lf", &fi);
	ci = f1(fi);
	printf("%.2lf F = %.2lf C",fi,ci);

	return;
}

//섭씨 온도 계산하는 함수
double f1(double fi)
{
	double change;
	change = ((fi - 32) * (5.0 / 9.0));

	return change;
}