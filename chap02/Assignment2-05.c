 /* 파일명: Assignment05.c
  * 내용: PA05. 길이를 인치(inch)로 입력받아 센티미터(cm) 로 변환하는 프로그램을 작성하시오. 1 inch는 2.54cm에 해당한다.
  * 작성자: 윤우진
  * 날짜: 2025.3.26
  * 버전: v1.0
  */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void length(void);

int main()
{
	length();
	return 0;
}

void length(void)
{
	float len;
	printf("길이(inch)? ");
	scanf("%f", &len);
	printf("%f inch = %f cm", len, (len * 2.54));

	return;
}