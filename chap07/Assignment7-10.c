/* 파일명: Assignment7-10.c

 * 내용: 3x3 행렬의 합을 구하는 프로그램을 작성하시오.
 * 행렬로 사용된 2차원 배열은 마음대로 초기화 해도 된다.
 * 작성자: 윤우진

 * 날짜:  2025.05.31
 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void Assignment0710()
{
	int x[3][3] =  
	{
		12, 85, 47,
		33, 2, 99,
		58, 71, 26
	};

	int y[3][3] =
	{
		64, 15, 38,
		90, 7, 52,
		44, 81, 19
	};


	int z[3][3] = { 0 };

	
	printf("x 행렬: \n  %d  %d  %d\n  %d  %d   %d\n  %d  %d  %d\n", x[0][0], x[0][1], x[0][2], x[1][0], x[1][1], x[1][2], x[2][0], x[2][1], x[2][1]);
	printf("y 행렬: \n  %d  %d  %d\n  %d  %d   %d\n  %d  %d  %d\n", y[0][0], y[0][1], y[0][2], y[1][0], y[1][1], y[1][2], y[2][0], y[2][1], y[2][1]);

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			z[i][j] = x[i][j] + y[i][j];
		}
	}

	printf("x + y 행렬: \n  %d  %d  %d\n  %d  %d   %d\n  %d  %d  %d\n", z[0][0], z[0][1], z[0][2], z[1][0], z[1][1], z[1][2], z[2][0], z[2][1], z[2][1]);

}


int main()
{
	Assignment0710();
	return 0;
}