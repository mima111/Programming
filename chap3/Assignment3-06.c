/* 파일명: assignment3-06.c
 * 내용: 아파트의 면적을 제곱미터(m2) 단위로 입력받아 몇 평인지 출력하는 프로그램을 작성하시오.
 * 1m제곱은 0.3025평에 해당한다. 프로그램을 작성할 때 이름 있는 상수를 이용해보자.
 * 작성자: 윤우진
 * 날짜: 2025.04.06
 * 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void area(void);

int main()
{
	area();
	return 0;
}

void area(void)
{
	double area, pyeong;
	printf("아파트의 면적(제곱미터)? ");
	scanf("%lf", &area);
	pyeong = area * 0.3025;
	printf("%.2lf 제곱미터 = %.2lf 평",area, pyeong);
	return;
}
