/* ���ϸ�: Assignment10-01
 * ����: ���ͳ� ����Ʈ�� �α����� �� ���Ǵ� ���̵�� �н����带 �����ϱ� ���� LOGIN ����ü�� �����Ͻÿ�.
 * ���̵�� �н������ ���� �ִ�20���ڱ��� �Է��� �� �ִ�.
 * �н����带 ����� ���� �н������� ������ ������ �ʵ��� '*'�� ����Ͻÿ�.
 *
 * �ۼ���: ������
 * ��¥:  2025.06.7
 * ����: v1.0
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct user 
{
    char id[21];  
    char pass[21]; 
} USER;

USER user1 = { 0 };

void Assignment1001();
void password(const char* pass);

void Assignment1001()
{
    printf("ID? ");
    scanf("%20s", user1.id); 

    printf("Password? ");
    scanf("%20s", user1.pass); 

    printf("\nID: %s\n", user1.id);
    printf("Password: ");
    password(user1.pass);
}

void password(const char* pass)
{
    for (int i = 0; pass[i] != '\0'; i++) 
    {
        printf("*");
    }
    printf("\n");
}

int main()
{
    Assignment1001();
    return 0;
}