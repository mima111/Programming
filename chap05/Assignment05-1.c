/* ���ϸ�: assignment05-1.c
 * ����: ���� �·Ḧ �Է¹޾Ƽ� ��ũ������ ���ÿ��� ���� ������ �˻��ϴ� ���α׷�
 * �ۼ���: ������
 * ��¥: 2025.04.25.
 * ����: v1.0
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int Assignment0501 (void);
int screen(int l, int t, int r, int b, int x, int y);

int main()
{
	Assignment0501();

	return 0;
}

int Assignment0501()
{
	int left, top, right, bottom;
	int x, y;

	printf("���� ������ �»���� (left,top)? ");
	scanf("%d %d", &left, &top);
	printf("���� ������ ���ϴ��� (right,bottom)? ");
	scanf("%d %d", &right, &bottom);
	printf("���� ��ǥ (x,y)? ");
	scanf("%d %d", &x, &y);
	int final = screen(left, top, right, bottom, x, y);

	if (final == 1)
	{
		printf("���簢�� ����� ���� ���� ���� ���Դϴ�.");
	}
	else
	{
		printf("���簢�� ����� ���� ���� ���� ���Դϴ�.");
	}
	return 0;
}

int screen(int l,int t,int r,int b,int x,int y)
{
	if (x >= l && x <= r && y >= t && y <= b)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}