/* ���ϸ�: Assignment01.c
* ����: PA01. �� ���� ���̸� �Է¹޾� ���簢���� ���̿� �ѷ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
* �ۼ���: ������
* ��¥: 2025.3.26
* ����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void  square(void);


int main()
{
	square();

	return 0;
}

void square(void)
{
	int side, area, circumference;
	printf("�� ���� ���� ? ");
	scanf("%d", &side);
	area = side * side;
	circumference = 4 * side;
	printf("���簢���� ����: %d\n", area);
	printf("���簢���� �ѷ�: %d", circumference);

	return;
}