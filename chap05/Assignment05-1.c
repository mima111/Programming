/* 파일명: assignment05-1.c
 * 내용: 점의 좌료를 입력받아서 스크린상의 선택영역 내의 점인지 검사하는 프로그램
 * 작성자: 윤우진
 * 날짜: 2025.04.25.
 * 버전: v1.0
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int Assignment0501 (void);
int screen(int l, int t, int r, int b, int x, int y);

int main()
{
	Assignment0501();

	return 0;
}

int Assignment0501()
{
	int left, top, right, bottom;
	int x, y;

	printf("선택 영역의 좌상단점 (left,top)? ");
	scanf("%d %d", &left, &top);
	printf("선택 영역의 우하단점 (right,bottom)? ");
	scanf("%d %d", &right, &bottom);
	printf("점의 좌표 (x,y)? ");
	scanf("%d %d", &x, &y);
	int final = screen(left, top, right, bottom, x, y);

	if (final == 1)
	{
		printf("직사각형 모양의 선택 영역 내의 점입니다.");
	}
	else
	{
		printf("직사각형 모양의 선택 영역 외의 점입니다.");
	}
	return 0;
}

int screen(int l,int t,int r,int b,int x,int y)
{
	if (x >= l && x <= r && y >= t && y <= b)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}