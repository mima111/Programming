/* 파일명: Assignment10-03
 * 내용: LOGIN 구조체 배열을 이용해서 로그인 과정을 프로그램으로 작성하시오.
 * 아이디를 입력받아 LOGIN 구조체 배열에서 아이디를 찾은 다음 입력받은 패스워드와
 * 등록된 패스워드를 비교해서 같으면 "로그인 성공"이라고 출력한다. LOGIN 구조체 배열은 크기가 5인
 * 배열로 선언하고 적당한 값으로 초기화해서 사용한다.
 *
 * 작성자: 윤우진
 * 날짜:  2025.06.7
 * 버전: v1.0
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
                printf("로그인 성공\n");
            }
            else 
            {
                printf("비밀번호가 틀렸습니다.\n");
            }
            break;
        }
    }

    if (!found) 
    {
        printf("존재하지 않는 ID입니다.\n");
    }

    return 0;
}

int main()
{
    Assignment1003();
    return 0;
}