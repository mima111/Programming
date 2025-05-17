/* 파일명: assignment6-06.c
 * 내용: red,green,blue를 인자로 전달해서 RGB 색을 만들어 리턴하는 make_rgb 함수를 
 * 정의하시오. 앞에서 정의한 get_red,get_green,get_blue 함수를 함께 이용해서 입력받은 RGB 색상의
 * 보색을 구해서 출력하는 프로그램을 작성하시오.
 * 작성자: 윤우진
 * 날짜: 2025.05.17
 * 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_red(int rgb);
int get_green(int rgb);
int get_blue(int rgb);
int make_rgb(int r, int g, int b);
int Assignment0609();

int main()
{
    Assignment0609();
    return 0;
}

int Assignment0609()
{
    int color;
    printf("RGB 색상? ");
    scanf("%x", &color);  

    int r = 255 - get_red(color);
    int g = 255 - get_green(color);
    int b = 255 - get_blue(color);

    int complement = make_rgb(r, g, b);

    printf("RGB %06X의 보색: %06X\n", color, complement);

    return 0;
}

int get_red(int rgb)
{
    return (rgb >> 16) & 0xFF;
}

int get_green(int rgb)
{
    return (rgb >> 8) & 0xFF;
}

int get_blue(int rgb)
{
    return rgb & 0xFF;
}

int make_rgb(int r, int g, int b)
{
    return (r << 16) | (g << 8) | b;
}