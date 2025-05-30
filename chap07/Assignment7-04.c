/* 파일명: Assignment7-04

 * 내용: 특정 값으로 초기화된 정수형 배열에 대해서 배열의 원소 중 최댓값을 가진 원소와 최솟값을 가진 원소를 찾아서
 * 인덱스와 값을 함께 출력하는 프로그램을 작성하시오. 배열의 초기값은 마음대로 정하시오.
 * 작성자: 윤우진

 * 날짜:  2025.05.31
 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void Assignment0704()
{
	int arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };

	int max = arr[0];
	int min = arr[0];

	for (int i = 0; i < 10; i++)
	{
		max = arr[i] > max ? arr[i] : max;
		min = arr[i] < min ? arr[i] : min;
	}


	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == max)
		{
			printf("최댓값: 인덱스=%d, 값=%d\n", i, max);
		}
	}

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == min)
		{
			printf("최솟값: 인덱스=%d, 값=%d", i, min);
		}
	}

}


int main()
{
	Assignment0704();
	return 0;
}