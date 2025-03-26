/* 파일명: Assignment02.c
* 내용: PA02. 가로의 길이와 세로의 길이를 입력받아 직사각형의 넓이와 둘레를 구하는 프로그램을 작성하시오.
* 작성자: 윤우진
* 날짜: 2025.3.26
* 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void  oblong(void);


int main()
{
	oblong();

	return 0;
}

void oblong(void)
{
	int width, length, area, circumference;
	printf("가로의 길이? ");
	scanf("%d",&width);
	printf("세로의 길이? ");
	scanf("%d", &length);

	area = width * length;
	circumference = 2 * (width + length);

	printf("직사각형의 넓이: %d\n",area);
	printf("직사각형의 둘레: %d", circumference);

	return;
}