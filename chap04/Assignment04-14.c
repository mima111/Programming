#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int won(int yo, int kwh);
int Assignment0414();

int main()
{
	Assignment0414();

	return 0;
}

int Assignment0414()
{
	int y, wh = 0;
	printf("�⺻ ���? ");
	scanf("%d", &y);
	printf("�� ��뷮(kwh)? ");
	scanf("%d", &wh);
	int result = won(y,wh);
	printf("���� ���: %d��", result);

	return 0;

}

int won(int yo, int kwh)
{
	int calcu;
	calcu = yo + (kwh * 190);

	return calcu;
}
