#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void f1(void);
int f3(int a, int b);

int main()
{
	int a = 3, b = 5;
	int result = f3(a,b);
	printf("%d", result);
	return 0;
}


/*void f1(void)
{
	// 1. Hello 출력
	printf("안녕! 나는 네 할아버지야.\n");
	
	return;
}
*/

/*
	함수명: int f3(int a, int b)
	기능: 입력돤 두 수 a, b를 더해서 반환
	입력: a, b는 정수
	반환: 정수
*/
int f3(int a, int b)
{
	int result = 0;
	
	// 두 수를 더해서 반환.
	result = a + b;
	
	return result;
}

//모듈화, 함수를 잘써야됨, 대부분 여러번 쓰는거 함수로 정의.