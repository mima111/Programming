/* 파일명: assignment4-17.c
 * 내용: 32비트 크기의 데이터(부호 없는 정수형)에는 0~31번 비트가 존재한다. 7번째 비트만 1인 값,
 * 15번째 비트만 1인 값, 23번째 비트만 1인 값, 31번째 비트만 1인 값을 구해서 16진수와 10진수로
 * 출력하는 프로그램을 작성하시오.
 * 작성자: 윤우진
 * 날짜: 2025.04.12
 * 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void bitbit(void);

int main()
{
	bitbit();
}

void bitbit(void)
{
	unsigned int b7 = 1 << 7;        
	unsigned int b15 = 1 << 15;      
	unsigned int b23 = 1 << 23;     
	unsigned int b31 = 1U << 31;     


	printf("7번 비트만 1인 값:  %08X %u\n", b7, b7);
	printf("15번 비트만 1인 값: %08X %u\n", b15, b15);
	printf("23번 비트만 1인 값: %08X %u\n", b23, b23);
	printf("31번 비트만 1인 값: %08X %d\n", b31, b31);

	return 0;
}