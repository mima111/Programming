#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void f1(void);
int f3(int a, int b);

int main()
{
	int a = 3, b = 5;
	int result = f3(a,b);
	printf("%d", result);
	return 0;
}


/*void f1(void)
{
	// 1. Hello ���
	printf("�ȳ�! ���� �� �Ҿƹ�����.\n");
	
	return;
}
*/

/*
	�Լ���: int f3(int a, int b)
	���: �Էµ� �� �� a, b�� ���ؼ� ��ȯ
	�Է�: a, b�� ����
	��ȯ: ����
*/
int f3(int a, int b)
{
	int result = 0;
	
	// �� ���� ���ؼ� ��ȯ.
	result = a + b;
	
	return result;
}

//���ȭ, �Լ��� �߽�ߵ�, ��κ� ������ ���°� �Լ��� ����.