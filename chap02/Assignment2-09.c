/* ���ϸ�: assignment09.c
* ����: PA09. ���Ը� �Ŀ��(lb)�� �Է¹޾� ų�α׷�(kg)���� ��ȯ�ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 1 lb�� 0.45359237kg�� �ش��Ѵ�.
* �ۼ���: ������
* ��¥: 2025.3.26
* ����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void lb(void);

int main()
{
	lb();

	return 0;
}

void lb(void)
{
	int pound;
	printf("����(ld) ? ");
	scanf("%d", &pound);
	printf("%d ld = %f kg", pound, (float)pound * 0.45359237);

	return;
}