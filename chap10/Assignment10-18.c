/* 파일명: Assignment10-13
 *
 * 내용: 음원 사이트의 플레이리스트 기능을 구현하려고 한다.
 * 이미 등록된 SONG 구조체 배열이 있을 때, 전체 곡 목록을 보여주고 사용자로부터
 * 플레이리스트에 추가할 노래를 번호로 선택하게 한다.
 * 플레이리스트에 노래를 추가할 때마다 플레이리스트의 곡 목록과 전체 재생 시간이
 * 얼마인지를 출력한다. 플레이리스트에는 최대 5곡만 등록할 수 있다.
 *
 * 작성자: 윤우진
 * 날짜:  2025.06.7
 * 버전: v1.0
 */ 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_SONGS 8
#define MAX_PLAYLIST 5

typedef struct 
{
    char title[50];
    char artist[50];
    char genre[20];
    int duration;
} SONG;

int main() 
{
    SONG songs[MAX_SONGS] = 
    {
        {"thank u, next", "Ariana Grande", "pop", 208},
        {"Attention", "Charlie Puth", "pop", 211},
        {"별 보러 가자", "박보검", "ballad", 316},
        {"How Long", "Charlie Puth", "pop", 198},
        {"I'm Fine", "방탄소년단", "hip-hop", 209},
        {"봄날", "방탄소년단", "hip-hop", 274},
        {"Awake", "방탄소년단", "ballad", 226},
        {"아낙네", "MINO", "hip-hop", 241}
    };

    SONG playlist[MAX_PLAYLIST];
    int playlist_count = 0;
    int total_duration = 0;

    while (playlist_count < MAX_PLAYLIST) 
    {
        printf("제목\t\t\t아티스트\n");
        for (int i = 0; i < MAX_SONGS; i++)
        {
            printf("%d: %s\t\t%s\n", i + 1, songs[i].title, songs[i].artist);
        }

        int choice;
        printf("플레이리스트에 추가할 곡 번호? ");
        scanf("%d", &choice);

        if (choice < 1 || choice > MAX_SONGS) 
        {
            printf("잘못된 곡 번호입니다.\n");
            continue;
        }

        
        playlist[playlist_count] = songs[choice - 1];
        total_duration += songs[choice - 1].duration;
        playlist_count++;

       
        printf("<< 플레이리스트 >>\n");
        for (int i = 0; i < playlist_count; i++) {
            printf("%s\n%s\n", playlist[i].artist, playlist[i].title);
        }
        printf("총 재생시간 : %d초\n", total_duration);
    }

    return 0;
}