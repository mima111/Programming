 /* ���ϸ�: assignment07.c
 * ����: PA07. �Ǽ����� �Է¹޾� �� ���� ������ �������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * �Ǽ����� �Է¹��� ���� 12.34ó�� �Ҽ� ǥ�� ����̳� 1.234eó�� ���� ǥ�� ����� �� �� ����� �� �ְ� �ϰ� 
 * ������ �������� ����� ���� ����ǥ�� ������� ����Ͻÿ�.
 * 
 * �ۼ���: ������
 * ��¥: 2025.3.26
 * ����: v1.0
 */
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void f_print (void);


int main()
{
	f_print();

	return 0;
}

void f_print(void)
{
	float f;
	printf("�Ǽ�? ");
	scanf("%f", &f);
	printf("����: %e\n", f * f);
	printf("������: %e", f * f * f);

	return;
}