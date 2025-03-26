/* 파일명: Assignment01.c
* 내용: PA01. 한 변의 길이를 입력받아 정사각형의 넓이와 둘레를 구하는 프로그램을 작성하시오.
* 작성자: 윤우진
* 날짜: 2025.3.26
* 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void  square(void);


int main()
{
	square();

	return 0;
}

void square(void)
{
	int side, area, circumference;
	printf("한 변의 길이 ? ");
	scanf("%d", &side);
	area = side * side;
	circumference = 4 * side;
	printf("정사각형의 넓이: %d\n", area);
	printf("정사각형의 둘레: %d", circumference);

	return;
}