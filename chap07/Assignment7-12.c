/* ���ϸ�: Assignment7-12

 * ����: ����ǥ ���� ���α׷��� �ۼ��Ϸ��� �Ѵ�. ������ ������ ���� �¼��� ��� 10����� ����.
 * ������ �¼����� �Է¹޾� �� �ڸ��� �Ҵ��Ѵ�.
 * ������ ������ �� �¼��� ���¸� ����Ѵ�. O�̸� ���� ����, X�� ���� �Ұ��� �ǹ��Ѵ�. �� �̻� ������ �� ������ ���α׷��� �����Ѵ�.
 * �ۼ���: ������

 * ��¥:  2025.05.31
 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0712()
{
	int seat[10] = { 0 };
	int input = 0;
	int remain = 10;

	while (seat[9] == 0)
	{
		printf("���� �¼� : [ ");
		for (int i = 0; i < 10; i++)
		{
			if (seat[i] == 0)
			{
				printf("O ");
			}
			else
			{
				printf("X ");
			}
		}
		printf("]\n");

		printf("������ �¼���? ");
		scanf("%d", &input);

		for (int i = 0; i < 10; i++)
		{
			if (seat[i] == 0 && input > 0)
			{
				seat[i] = 1; 
				printf("%d ", i + 1);
				input--;
			}
		}
		printf(" �� �¼��� �����߽��ϴ�.\n");
	}
}


int main()
{
	Assignment0712();
	return 0;
}