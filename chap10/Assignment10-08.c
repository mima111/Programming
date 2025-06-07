/* 파일명: Assignment10-08
 *
  * 내용: 커피숍에서 판매되는 제품 정보를 나타내는 PRODUCT 구조체를 정의하시오. 각 제품별로 제품명,
  * 가격, 재고를 저장할 수 있어야 한다. PRODUCT 구조체를 매개변수로 전달받아 제품정보를 출력하는
  * print_product 함수를 정의하시오. PRODUCT 구조체 변수를 선언한 다음 제품명, 가격, 재고를 입력받아 저장하고 출력하는
  * 프로그램을 작성하시오. 참고로 제품명은 빈칸 없는 한 단어로 입력한다.
  *
  * 작성자: 윤우진
  * 날짜:  2025.06.7
  * 버전: v1.0
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
    printf("제품명: %s\n", p.name);
    printf("가격: %d원\n", p.price);
    printf("재고: %d개\n", p.stock);
}

int main() 
{
    PRODUCT coffee;

    printf("제품명 입력: ");
    scanf("%29s", coffee.name);  

    printf("가격 입력: ");
    scanf("%d", &coffee.price);

    printf("재고 입력: ");
    scanf("%d", &coffee.stock);

    printf("\n[제품 정보 출력]\n");
    print_product(coffee);

    return 0;
}