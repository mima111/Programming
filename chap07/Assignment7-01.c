/* ���ϸ�: Assignment7-01

 * ����:���������� ���� �׿� �׻� ������ ��(����)�� ���Ͽ� ������ �����̴�.
  ũ�Ⱑ 10�� ������ �迭�� ���Ͽ� ���������� ���� ä����� �Ѵ�.
  ù ��° ���� ���� ����(common difference)�� �Է¹޾Ƽ� �迭�� ä��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
   
   �ۼ���: ������

   ��¥: 2025.05.31

   ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int Assignement0701()
{
	int a[10];
	int first, common_difference = 0;

	printf("ù��° ��?");
	scanf("%d", &first);

	printf("����?");
	scanf("%d", &common_difference);


	a[0] = first; 
	printf("�������� : %d  ", a[0]);
	for (int i = 1; i <= 9; i++)
	{
		a[i] = a[i - 1] + common_difference;
		printf("%d  ", a[i]);
	}


}


int main()
{
	Assignement0701();
	return 0;
}