/* ���ϸ�: assignment05-8.c
 * ����: ��Ʈ ������ �����ϴ� �Ի�⸦ ���α׷��Ͻÿ�.
 * �ۼ���: ������
 * ��¥: 2025.04.25.
 * ����: v1.0
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Assignment0508();
int bit(int a, int b, char c);

int main()
{
	Assignment0508();
	return 0;
}

int Assignment0508()
{
	int a_in, b_in;
	char mun;
	int compute;
	int save_a_in, save_b_in;
	char save_mun;

	printf("��Ʈ �����? ");
	scanf("%i %c %i", &a_in, &mun, &b_in);

	save_a_in = a_in;
	save_b_in = b_in;
	save_mun = mun;

	compute = bit(a_in, b_in, mun);
	printf("%X %c %X = %X", save_a_in, save_mun, save_b_in, compute);

	return 0;
}

int bit(int a, int b, char c)
{
	int result;

	if (c == '&')
	{
		 result = a & b;
		return result;
	}
	if (c == '^')
	{
		result = a ^ b;
		return result;
	}
	if (c == '|')
	{
		result = a | b;

		return result;
	}
	return 0;
}