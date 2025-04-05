/* 파일명: assignment3-02.c
 * 내용: 가로의 길이와 세로의 길이를 입력받아 직사각형의 넓이와 둘레를 구하는 프로그램을 작성하시오.
 * 작성자: 윤우진
 * 날짜: 2025.04.06
 * 버전: v1.0
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void square2(void);

int main()
{
	square2();
	return 0;
}

void square2(void)
{
	int side, side2, area, circumference;
	printf("가로의 길이 ? ");
	scanf("%d", &side);
	printf("세로의 길이 ? ");
	scanf("%d", &side2);
	area = side * side2;
	circumference = 2 * (side + side2);
	printf("직사각형의 넓이: %d\n", area);
	printf("직사각형의 둘레: %d", circumference);

	return;
}