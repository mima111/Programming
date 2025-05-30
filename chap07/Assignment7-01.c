/* 파일명: Assignment7-01

 * 내용:등차수열은 앞의 항에 항상 일정한 수(공차)를 더하여 만들어가는 수열이다.
  크기가 10인 정수형 배열에 대하여 등차수열로 값을 채우려고 한다.
  첫 번째 항의 값과 공차(common difference)를 입력받아서 배열을 채우고 출력하는 프로그램을 작성하시오.
   
   작성자: 윤우진

   날짜: 2025.05.31

   버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int Assignement0701()
{
	int a[10];
	int first, common_difference = 0;

	printf("첫번째 항?");
	scanf("%d", &first);

	printf("공자?");
	scanf("%d", &common_difference);


	a[0] = first; 
	printf("등차수열 : %d  ", a[0]);
	for (int i = 1; i <= 9; i++)
	{
		a[i] = a[i - 1] + common_difference;
		printf("%d  ", a[i]);
	}


}


int main()
{
	Assignement0701();
	return 0;
}