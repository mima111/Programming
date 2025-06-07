/* 파일명: Assignment10-01
 * 내용: 인터넷 사이트에 로그인할 때 사용되는 아이디와 패스워드를 관리하기 위한 LOGIN 구조체를 정의하시오.
 * 아이디와 패스워드는 각각 최대20글자까지 입력할 수 있다.
 * 패스워드를 출력할 때는 패스워드의 내용은 보이지 않도록 '*'로 출력하시오.
 *
 * 작성자: 윤우진
 * 날짜:  2025.06.7
 * 버전: v1.0
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