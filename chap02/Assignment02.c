/* ���ϸ�: Assignment02.c
* ����: PA02. ������ ���̿� ������ ���̸� �Է¹޾� ���簢���� ���̿� �ѷ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
* �ۼ���: ������
* ��¥: 2025.3.26
* ����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void  oblong(void);


int main()
{
	oblong();

	return 0;
}

void oblong(void)
{
	int width, length, area, circumference;
	printf("������ ����? ");
	scanf("%d",&width);
	printf("������ ����? ");
	scanf("%d", &length);

	area = width * length;
	circumference = 2 * (width + length);

	printf("���簢���� ����: %d\n",area);
	printf("���簢���� �ѷ�: %d", circumference);

	return;
}