/* ���ϸ�: Assignment10-03
 * ����: LOGIN ����ü �迭�� �̿��ؼ� �α��� ������ ���α׷����� �ۼ��Ͻÿ�.
 * ���̵� �Է¹޾� LOGIN ����ü �迭���� ���̵� ã�� ���� �Է¹��� �н������
 * ��ϵ� �н����带 ���ؼ� ������ "�α��� ����"�̶�� ����Ѵ�. LOGIN ����ü �迭�� ũ�Ⱑ 5��
 * �迭�� �����ϰ� ������ ������ �ʱ�ȭ�ؼ� ����Ѵ�.
 *
 * �ۼ���: ������
 * ��¥:  2025.06.7
 * ����: v1.0
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct {
    char id[21];  
    char pass[21];  
} LOGIN;

int Assignment1003()
{
    
    LOGIN users[5] = 
    {
        {"guest", "idontknow"},
        {"admin", "admin123"},
        {"guest", "guest123"},
        {"test", "testpass"},
        {"yoon", "woojin"}
    };

    char inputId[21];
    char inputPass[21];
    int found = 0;

    printf("ID? ");
    scanf("%20s", inputId);

    for (int i = 0; i < 5; i++) 
    {
        if (strcmp(users[i].id, inputId) == 0) 
        {
            found = 1;
            printf("Password? ");
            scanf("%20s", inputPass);

            if (strcmp(users[i].pass, inputPass) == 0) 
            {
                printf("�α��� ����\n");
            }
            else 
            {
                printf("��й�ȣ�� Ʋ�Ƚ��ϴ�.\n");
            }
            break;
        }
    }

    if (!found) 
    {
        printf("�������� �ʴ� ID�Դϴ�.\n");
    }

    return 0;
}

int main()
{
    Assignment1003();
    return 0;
}