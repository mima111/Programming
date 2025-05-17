/* 파일명: assignment6-03.c
 * 내용: 두 점 사이의 직선 거리를 구하는 distance 함수를 작성하시오. distance 함수를 이용해서 입력받은 
 시작점부터 끝점 사이의 직선 거리를 구하는 프로그램을 작성하시오.
 * 작성자: 윤우진
 * 날짜: 2025.05.17
 * 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>  //라이브러리 함수 사용.

double distance(double, double, double, double); 
double Assignment0603(void);

int main()
{
    Assignment0603(); 
    return 0;
}

double Assignment0603(void)
{
    double x_1 = 0, y_1 = 0, x_2 = 0, y_2 = 0;

    printf("직선의 시작점 좌표? ");
    scanf("%lf %lf", &x_1, &y_1);

    printf("직선의 끝점 좌표? ");
    scanf("%lf %lf", &x_2, &y_2);

    double final = distance(x_1, y_1, x_2, y_2);

    printf("(%d, %d) ~ (%d, %d) 직선의 길이: %lf\n", x_1, y_1, x_2, y_2, final);

    return 0;
}

double distance(double x1, double y1, double x2, double y2)
{
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    //제곱근 구하는 라이브러리 함수 사용.
}