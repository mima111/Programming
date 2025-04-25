/* 파일명: assignment05-4.c
 * 내용: 연도 입력받아 윤년인지 아닌지 판단
 * 작성자: 윤우진
 * 날짜: 2025.04.25.
 * 버전: v1.0
*/


#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Assignment0504(void);
int yun(int y);


int main()
{
	Assignment0504();
	return 0;
}

int Assignment0504()
{
	int year = 0;
	printf("연도? ");
	scanf("%d", &year);
	int result = yun(year);
	if (result == 1)
	{
		printf("%d년은 윤년입니다.", year);
	}
	else
	{
		printf("%d년은 윤년이 아닙니다.",year);
	}
	return 0;
}

int yun(int y)
{
	int result;
	if (y % 4 == 0)
	{
		if (y % 100 == 0)
		{
			return 0;
		}
		if (y % 400 == 0)
		{
			return 1;
		}
	}
	else
	{
		return 0;
	}
}


