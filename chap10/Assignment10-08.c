/* ���ϸ�: Assignment10-08
 *
  * ����: Ŀ�Ǽ󿡼� �ǸŵǴ� ��ǰ ������ ��Ÿ���� PRODUCT ����ü�� �����Ͻÿ�. �� ��ǰ���� ��ǰ��,
  * ����, ��� ������ �� �־�� �Ѵ�. PRODUCT ����ü�� �Ű������� ���޹޾� ��ǰ������ ����ϴ�
  * print_product �Լ��� �����Ͻÿ�. PRODUCT ����ü ������ ������ ���� ��ǰ��, ����, ��� �Է¹޾� �����ϰ� ����ϴ�
  * ���α׷��� �ۼ��Ͻÿ�. ����� ��ǰ���� ��ĭ ���� �� �ܾ�� �Է��Ѵ�.
  *
  * �ۼ���: ������
  * ��¥:  2025.06.7
  * ����: v1.0
  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

  
typedef struct 
{
    char name[30];   
    int price;       
    int stock;       
} PRODUCT;


void print_product(PRODUCT p) {
    printf("��ǰ��: %s\n", p.name);
    printf("����: %d��\n", p.price);
    printf("���: %d��\n", p.stock);
}

int main() 
{
    PRODUCT coffee;

    printf("��ǰ�� �Է�: ");
    scanf("%29s", coffee.name);  

    printf("���� �Է�: ");
    scanf("%d", &coffee.price);

    printf("��� �Է�: ");
    scanf("%d", &coffee.stock);

    printf("\n[��ǰ ���� ���]\n");
    print_product(coffee);

    return 0;
}