/* ���ϸ�: Assignment10-13
 *
 * ����: ���簢�� ������ ��Ÿ���� RECT ����ü�� �����Ͻÿ�. ���簢���� ���ϴ����� ���������� �����Ǹ�
 * ���� ��ǥ�� POINT ����ü�� �̿��ؼ� ��Ÿ����. ���簢�� ������ ����ϴ� print_rect �Լ��� �����ϰ�,
 * RECT ����ü ������ �����ؼ� ���簢�� ������ �Է¹ް� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 *
 * �ۼ���: ������
 * ��¥:  2025.06.7
 * ����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 
typedef struct 
{
    int x;
    int y;
} POINT;


typedef struct 
{
    POINT left_bottom;
    POINT right_top;    
} RECT;


void print_rect(RECT r) 
{
    printf("���ϴ� ��: (%d, %d)\n", r.left_bottom.x, r.left_bottom.y);
    printf("���� ��: (%d, %d)\n", r.right_top.x, r.right_top.y);
}

int main() 
{
    RECT rect;

    printf("���ϴ� x ��ǥ �Է�: ");
    scanf("%d", &rect.left_bottom.x);

    printf("���ϴ� y ��ǥ �Է�: ");
    scanf("%d", &rect.left_bottom.y);

    printf("���� x ��ǥ �Է�: ");
    scanf("%d", &rect.right_top.x);

    printf("���� y ��ǥ �Է�: ");
    scanf("%d", &rect.right_top.y);

    printf("\n[���簢�� ���� ���]\n");
    print_rect(rect);

    return 0;
}