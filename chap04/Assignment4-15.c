/* 파일명: assignment4-15.c
 * 내용: 우리가 알고 있는 환율은 매매기준율이다. 실제 달러를 구입할 때는 매매기준율에 은행의
 *		 환전수수료를 더해서 환율이 결정된다. 환전수수료는 환전우대율에 따라 달라진다. 
 *		 환전수수료율은 은행마다 미리 정해지며, 환전우대율은 고객마다 다르게 책정된다.
 *		 환전수수료율은 1.75%로 정해져있다고 가정하고 원-달러 매매기준율과 환전우대율(%)를 입력받아
 *		 달러를 살 때 적용되는 환율을 결정하고 , 구입하고자 하는 달러가 얼마인지 입력받아서 몇 원에 해당하는지 
 *		 출력하는 프로그램을 작성하시오.
 * 작성자: 윤우진
 * 날짜: 2025.04.12
 * 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void Assignment0415(void);


int main()
{
	Assignment0415();
	return 0;
}

void Assignment0415(void)
{
	//현찰 매입 시 환율 = 매매기준율 + 환전수수료
									//매매기준율 + 환전수수료율 * ( 1 - 환전우대율 )


	double wudae = 0.0, susu = 0.0, gijun = 0.0, whan_susu = 0.0, whan = 0.0, USD = 0.0, change = 0.0;


		
		printf("원/달러 매매기준율? ");
		scanf("%lf",&gijun);
		printf("환율우대율(0~100%%)? ");
		scanf("%lf",&wudae);
        
		whan_susu = gijun * 0.0175 * (1 - ( wudae / 100.0 ));
		whan = gijun + whan_susu;
		
		printf("달러 살 때 환율은 %lf입니다.\n",whan);
		
		printf("구입할 달러(USD)? ");
		scanf("%lf", &USD);
		change = USD * whan;
		
		printf("USD %.2lf 살 때 ==> KRW %.2lf", USD, change);
		
		

		return 0;
}


	