/* ���ϸ�: assignment10.c
* ����: PA10. ��/�޷� ȯ���� �޷��� �Է¹޾� �� ������ �ⷫ�ϴ� ���α׷��� �ۼ��Ͻÿ�.
* �ۼ���: ������
* ��¥: 2025.3.26
* ����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void exchange(void);


int main()
{
	exchange();

	return 0;
}

void exchange(void)
{
	float USD;
	float KRW;

	USD = 0;
	KRW = 0;

	printf("USD? ");
	scanf("%f", &USD);
	printf("��/�޷� ȯ��? ");
	scanf("%f", &KRW);
	printf("USD %.2f = KRW %.2f", USD, USD * KRW);

	return;

}