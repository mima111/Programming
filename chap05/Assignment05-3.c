/* 파일명: assignment05-3.c
 * 내용: 10원미만 절삭해서 거스름돈의 돈 단위를 출력
 * 작성자: 윤우진
 * 날짜: 2025.04.25.
 * 버전: v1.0
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Assignment0503(void);
int julsa(int a);

int main()
{
	Assignment0503();
	return 0;
}

int Assignment0503()
{
	int money, man_5,man_1,th_5,th,hd,ten;
	
	printf("거스름돈? ");
	scanf("%d", &money);

	int julsa_money = julsa(money);

	printf("거스름돈 (10원미만 절사): %d\n", julsa_money);

	man_5 = money / 50000;
	man_1 = money % 50000 / 10000;
	th_5 = money % 50000 % 10000 / 5000;
	th = money % 50000 % 10000 % 5000 / 1000;
	hd = money % 50000 % 10000 % 5000 % 1000 / 100;
	ten = money % 50000 % 10000 % 5000 % 1000 % 100 / 10;

	printf("50000원 %d장\n", man_5);
	printf("10000원 %d장\n", man_1);
	printf("5000원 %d장\n", th_5);
	printf("1000원 %d장\n", th);
	printf("100원 %d개\n", hd);
	printf("10원 %d개\n", ten);

	
	return 0;
}

int julsa(int a)
{
	int b = a;
	if (a > 10)
	{
		a = a % 10;
	}
	b = b - a;

	return b;
}
