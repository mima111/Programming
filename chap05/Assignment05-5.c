/* 파일명: assignment05-5.c
 * 내용: 온도 입력받아 섭씨온도로 화씨온도는 섭씨온도로 변환하는 프로그램
 * 작성자: 윤우진
 * 날짜: 2025.04.25.
 * 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double Assignment0505(void);
double temp_r(double t, char ty);

int main()
{
	Assignment0505();
	return 0;
}

double Assignment0505()
{
	double temp, save_temp = 0;
	char type, save_type;
	double result;
    double reverse_temp;
	char reverse_type;

	printf("온도? ");
	scanf("%lf %c", &temp, &type);

	save_temp = temp;
	save_type = type;
	
	if (save_type == 'C')
	{
		reverse_type = 'F';
	}
	else
	{
		reverse_type = 'C';
	}

	result = temp_r(temp, type);
	printf("%.2f %c ==> %.2f %c", save_temp, save_type, result, reverse_type);
	return 0;
}

double temp_r(double t, char ty)
{
	if (ty == 'C')
	{
		double f_1;
		f_1 = 0.0;
		f_1 = ((t * (9.0 / 5.0)) + 32);
		return f_1;
	}
	if (ty == 'F')
	{
		double c_1;
		c_1 = 0.0;
		c_1 = ((c_1 - 32) * (5 / 9));
		return c_1;
	}
	return 0;
}