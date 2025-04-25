/* 파일명: assignment05-17.c
 * 내용: 주차시간을 분으로 입력받아서 주차 요금 계산해서 출력하는 프로그램을 작성하시오.
 * 작성자: 윤우진
 * 날짜: 2025.04.25.
 * 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Assignment0517(void);
int jucha(int m);

int main()
{
	Assignment0517();
	return 0;
}

int Assignment0517()
{
	int min,result_fee;
	printf("주차 시간(분)? ");
	scanf("%d", &min);

	if (min >= 1440)
	{
		printf("주차시간은 24시간을 넘길 수 없습니다.");

		return 0;
	}

	result_fee = jucha(min);
	printf("주차 요금: %d원", result_fee);

	return 0;
}

int jucha(int m)
{
	if (m >= 30)
	{
		int fee = 3000 + (((m - 30) / 10) * 1000);

		return fee;
	}
	else
	{
		return 0;
	}
	return 0;
}