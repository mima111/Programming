/* ���ϸ�: assignment05-17.c
 * ����: �����ð��� ������ �Է¹޾Ƽ� ���� ��� ����ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * �ۼ���: ������
 * ��¥: 2025.04.25.
 * ����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Assignment0517(void);
int jucha(int m);

int main()
{
	Assignment0517();
	return 0;
}

int Assignment0517()
{
	int min,result_fee;
	printf("���� �ð�(��)? ");
	scanf("%d", &min);

	if (min >= 1440)
	{
		printf("�����ð��� 24�ð��� �ѱ� �� �����ϴ�.");

		return 0;
	}

	result_fee = jucha(min);
	printf("���� ���: %d��", result_fee);

	return 0;
}

int jucha(int m)
{
	if (m >= 30)
	{
		int fee = 3000 + (((m - 30) / 10) * 1000);

		return fee;
	}
	else
	{
		return 0;
	}
	return 0;
}