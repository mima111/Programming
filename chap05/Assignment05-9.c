/* ���ϸ�: assignment05-9.c
 * ����: �ܹ��� ������ ��꼭 ���α׷��� �ۼ��Ͻÿ�.
 * �ۼ���: ������
 * ��¥: 2025.04.25.
 * ����: v1.0
 * �޸�: ��¥ Ǯ�鼭 �ʹ� ��վ���.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Assignment0508();
int hambugi();

int main()
{
	Assignment0508();
	
	return 0;
}

int Assignment0508()
{
	int ham, gam, cola, set_c;

	
	printf("[�ܹ��� 4000��, ����Ƣ�� 2000��, �ݶ� 1500��, ��Ʈ 6500��]\n");
	printf("�ܹ��� ����? ");
	scanf("%d", &ham);
	printf("����Ƣ�� ����? ");
	scanf("%d", &gam);
	printf("�ݶ� ����? ");
	scanf("%d", &cola);

	set_c = hambugi(ham,gam,cola);

	ham = ham - set_c;
	gam = gam - set_c;
	cola = cola - set_c;

	printf("\n��ǰ��        �ܰ�   ����   �ݾ�\n");
	printf("��Ʈ          %d    %d    %d \n",6500, set_c, set_c * 6500);
	printf("�ܹ���        %d    %d     %d \n",4000, ham, ham * 4000);
	printf("����Ƣ��      %d    %d     %d \n",2000, gam, gam * 2000);
	printf("--------------------------------\n");
	printf("�հ�                       %d ",set_c * 6500 + ham * 4000 + gam * 2000);

	return 0;
}

int hambugi(int h,int g,int c)
{
	int set;

	if (h < g && h < c)
	{
		set = h;
	}
	if (g < h && g < c)
	{
		set = g;
	}
	if (c < h && c < g)
	{
		set = c;
	}
	
	return set;
}
