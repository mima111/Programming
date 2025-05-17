/* 파일명: assignment6-01.c
 * 내용: 가로와 세로의 길이를 매개변수로 전달받아 직사각형의 둘레를 구하는 get_perimeter 함수를 작성하시오.
 * get_perimeter 함수를 이용해서 입력받은 가로, 세로의 길이로 직사각형의 둘레를 구하는 프로그램을 작성하시오.
 * 작성자: 윤우진
 * 날짜: 2025.05.17
 * 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_perimeter(int, int);
int assignment0601(void);

int main()
{
	assignment0601();
	return 0;
}

int assignment0601(void)
{
	int a, b;
	printf("가로? ");
	scanf("%d", &a);
	printf("세로? ");
	scanf("%d", &b);

	int result = get_perimeter(a, b);

	printf("직사각형의 둘레: %d", result);

	return 0;
}

int get_perimeter(int x, int y)
{
	int squre_cir;
	squre_cir = (x + y) * 2;

	return squre_cir;
}