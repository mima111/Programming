/* ���ϸ�: assignment05-4.c
 * ����: ���� �Է¹޾� �������� �ƴ��� �Ǵ�
 * �ۼ���: ������
 * ��¥: 2025.04.25.
 * ����: v1.0
*/


#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Assignment0504(void);
int yun(int y);


int main()
{
	Assignment0504();
	return 0;
}

int Assignment0504()
{
	int year = 0;
	printf("����? ");
	scanf("%d", &year);
	int result = yun(year);
	if (result == 1)
	{
		printf("%d���� �����Դϴ�.", year);
	}
	else
	{
		printf("%d���� ������ �ƴմϴ�.",year);
	}
	return 0;
}

int yun(int y)
{
	int result;
	if (y % 4 == 0)
	{
		if (y % 100 == 0)
		{
			return 0;
		}
		if (y % 400 == 0)
		{
			return 1;
		}
	}
	else
	{
		return 0;
	}
}


