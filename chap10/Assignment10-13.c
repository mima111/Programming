/* 파일명: Assignment10-13
 *
 * 내용: 직사각형 정보를 나타내는 RECT 구조체를 정의하시오. 직사각형은 좌하단점과 우상단점으로 구성되며
 * 점의 좌표는 POINT 구조체를 이용해서 나타낸다. 직사각형 정보를 출력하는 print_rect 함수를 정의하고,
 * RECT 구조체 변수를 선언해서 직사각형 정보를 입력받고 출력하는 프로그램을 작성하시오.
 *
 * 작성자: 윤우진
 * 날짜:  2025.06.7
 * 버전: v1.0
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
    printf("좌하단 점: (%d, %d)\n", r.left_bottom.x, r.left_bottom.y);
    printf("우상단 점: (%d, %d)\n", r.right_top.x, r.right_top.y);
}

int main() 
{
    RECT rect;

    printf("좌하단 x 좌표 입력: ");
    scanf("%d", &rect.left_bottom.x);

    printf("좌하단 y 좌표 입력: ");
    scanf("%d", &rect.left_bottom.y);

    printf("우상단 x 좌표 입력: ");
    scanf("%d", &rect.right_top.x);

    printf("우상단 y 좌표 입력: ");
    scanf("%d", &rect.right_top.y);

    printf("\n[직사각형 정보 출력]\n");
    print_rect(rect);

    return 0;
}