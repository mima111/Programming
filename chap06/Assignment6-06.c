/* 파일명: assignment6-06.c
 * 내용: 다음과 같이 메뉴를 출력하고 선택된 메뉴 항목의 번호를 리턴하는 choose_menu 함수를 작성하시오.
 * 잘못된 번호를 선택하면 올바른 번호를 선택할 때까지 계속 메뉴를 출력하고 다시 선택받아야 한다.
 * 즉,choose_menu 함수는 반드시 0~3사이의 값을 리턴해야 한다. choose_menu 의 리턴값에 따라 어떤 메뉴가 선택되었는지
 * 간단히 출력하는 프로그램을 작성하시오.
 * 작성자: 윤우진
 * 날짜: 2025.05.17
 * 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int choose(void);
int Assignment0606(void);

int main()
{
	Assignment0606();
	return 0;
}

int Assignment0606(void)
{
	choose();
	return 0;
}

int choose()
{
	
	int code;
	
	while (1)
	{
		printf("[1. 파일 열기 2.파일 저장 3.인쇄 0.종료] 선택? ");

		scanf("%d", &code);
		if (code == 1)
		{
			printf("파일 열기를 수행합니다.\n");
		}
		else if (code == 2)
		{
			printf("파일 저장을 실행합니다.\n");
		}
		else if(code == 3)
		{
			printf("인쇄를 실행합니다.\n");
		}
		else if (code == 0)
		{
			printf("종료합니다.\n");
			return 0;
		}
		else
		{
			continue;
		}
	}

	return 0;
}