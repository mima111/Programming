/* ���ϸ�: assignment11.c
* ����: PA11. ��/�޷� ȯ���� ��ȭ�� �Է¹޾� �� �޷����� �ⷫ�ϴ� ���α׷��� �ۼ��Ͻÿ�.
* �ۼ���: ������
* ��¥: 2025.3.26
* ����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void exchange2(void);

int main()
{
	exchange2();

	return 0;
}


void exchange2(void)
{
	int KRW;
	float USD;
	KRW = 0;
	USD = 0;

	printf("KRW ? ");
	scanf("%d", &KRW);
	printf("��/�޷� ȯ��? ");
	scanf("%f", &USD);
	printf("KRW %d = USD %.2f", KRW, (float)KRW / USD);

	return;
}
