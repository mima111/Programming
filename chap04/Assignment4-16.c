/* 파일명: assignment4-16.c
 * 내용: 컴퓨터 시스템에서 색상을 표현하는 방법 중에 RGB 표기법은 red, green, blue에 8비트씩을
 * 사용해서 색상을 표현하므로 24비트 트루컬러라고 한다. 컴퓨터시스템에서는 32비트 데이터의
 * 최하위 바이트부터 red, green, blue의 순서로 3개 입력받아서 RGB 색상을 만들어서 출력하는 프로그램을 작성하시오.
 * RGB 색상을 출력할 때는 바이트 단위로 값을 알아보기 쉽도록 16진수로 출력한다.
 * 작성자: 윤우진
 * 날짜: 2025.04.12
 * 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void true_color(void);

int main()
{
	true_color();
}

void true_color(void)
{
	unsigned char red, green, blue;

	printf("red? ");
	scanf("%hhu", &red);
	printf("green? ");
	scanf("%hhu", &green);
	printf("blue? ");
	scanf("%hhu", &blue);

	unsigned int result = ((red << 16) | (green << 8) | blue);

	printf("RGB 트루컬러: %06X", result);

	return 0;
}
