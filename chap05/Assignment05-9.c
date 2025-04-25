/* 파일명: assignment05-9.c
 * 내용: 햄버거 가게의 계산서 프로그램을 작성하시오.
 * 작성자: 윤우진
 * 날짜: 2025.04.25.
 * 버전: v1.0
 * 메모: 진짜 풀면서 너무 재밌었음.
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

	
	printf("[햄버거 4000원, 감자튀김 2000원, 콜라 1500원, 세트 6500원]\n");
	printf("햄버거 개수? ");
	scanf("%d", &ham);
	printf("감자튀김 개수? ");
	scanf("%d", &gam);
	printf("콜라 개수? ");
	scanf("%d", &cola);

	set_c = hambugi(ham,gam,cola);

	ham = ham - set_c;
	gam = gam - set_c;
	cola = cola - set_c;

	printf("\n상품명        단가   수량   금액\n");
	printf("세트          %d    %d    %d \n",6500, set_c, set_c * 6500);
	printf("햄버거        %d    %d     %d \n",4000, ham, ham * 4000);
	printf("감자튀김      %d    %d     %d \n",2000, gam, gam * 2000);
	printf("--------------------------------\n");
	printf("합계                       %d ",set_c * 6500 + ham * 4000 + gam * 2000);

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
