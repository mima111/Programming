/* ���ϸ�: assignment05-3.c
 * ����: 10���̸� �����ؼ� �Ž������� �� ������ ���
 * �ۼ���: ������
 * ��¥: 2025.04.25.
 * ����: v1.0
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Assignment0503(void);
int julsa(int a);

int main()
{
	Assignment0503();
	return 0;
}

int Assignment0503()
{
	int money, man_5,man_1,th_5,th,hd,ten;
	
	printf("�Ž�����? ");
	scanf("%d", &money);

	int julsa_money = julsa(money);

	printf("�Ž����� (10���̸� ����): %d\n", julsa_money);

	man_5 = money / 50000;
	man_1 = money % 50000 / 10000;
	th_5 = money % 50000 % 10000 / 5000;
	th = money % 50000 % 10000 % 5000 / 1000;
	hd = money % 50000 % 10000 % 5000 % 1000 / 100;
	ten = money % 50000 % 10000 % 5000 % 1000 % 100 / 10;

	printf("50000�� %d��\n", man_5);
	printf("10000�� %d��\n", man_1);
	printf("5000�� %d��\n", th_5);
	printf("1000�� %d��\n", th);
	printf("100�� %d��\n", hd);
	printf("10�� %d��\n", ten);

	
	return 0;
}

int julsa(int a)
{
	int b = a;
	if (a > 10)
	{
		a = a % 10;
	}
	b = b - a;

	return b;
}
