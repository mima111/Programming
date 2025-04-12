/* 파일명: assignment4-09.c
 * 내용: 동영상의 재생시간을 초 단위로 입력받아 몇 시간 몇 분 몇 초인지 출력하는 프로그램을 작성하시오.
 * 작성자: 윤우진
 * 날짜: 2025.04.11
 * 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Time
{
    int hr;
    int m;
    int sec;
};


void Assignment0409(void);
struct Time time(double sec_input);


int main()
{
    Assignment0409();
    return 0;
}

void Assignment0409(void)
{
    double sec_input;
    struct Time result;

    printf("재생시간(초)? ");
    scanf("%lf", &sec_input);

    result = time(sec_input);

    printf("재생시간은 %d시간 %d분 %d초입니다.\n", result.hr, result.m, result.sec);


}


struct Time time(double sec_input)
{
    struct Time t;


    t.hr = (int)(sec_input / 3600);
    t.m = (int)(sec_input) % 3600 / 60;
    t.sec = (int)(sec_input) % 60;


    return t;
}