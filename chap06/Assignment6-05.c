/* 파일명: assignment6-05.c
 * 내용: 인자로 정수가 짝수인지 검사하는 is_even 함수와 홀수인지 검사하는 id_odd 함수를 작성하시오.
 * 두 함수를 이용해서 0이 입력될 때까지 입력된 정수들에 대해서 짝수의 개수와 홀수의 개수를 구해서 출력하는
 * 프로그램을 작성하시오.
 * 작성자: 윤우진
 * 날짜: 2025.05.17
 * 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_even(int);
int is_odd(int);
int Assignment0605(void);

int main()
{
	Assignment0605();
	return 0;
}

int is_even(int a)
{
	return a % 2 == 0;
}

int is_odd(int a)
{
	return a % 2 != 0;
}

int Assignment0605(void)
{
	printf("정수를 빈칸으로 구분해서 입력하세요.(마지막에 0 입력)\n");
	int num = 0, co_e = 0, co_odd = 0;
	while (1)
	{
		scanf("%d", &num);
		if (num == 0)
		{
			break;
		}

		if ((is_even(num)))
		{
			co_e++;
		}
		else if ((is_odd(num)))
		{

			co_odd++;
		}
	}
	printf("입력받은 정수 중 짝수는 %d개, 홀수는 %d개입니다.",co_e, co_odd);
}