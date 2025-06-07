/* ���ϸ�: Assignment10-13
 *
 * ����: ���� ����Ʈ�� �÷��̸���Ʈ ����� �����Ϸ��� �Ѵ�.
 * �̹� ��ϵ� SONG ����ü �迭�� ���� ��, ��ü �� ����� �����ְ� ����ڷκ���
 * �÷��̸���Ʈ�� �߰��� �뷡�� ��ȣ�� �����ϰ� �Ѵ�.
 * �÷��̸���Ʈ�� �뷡�� �߰��� ������ �÷��̸���Ʈ�� �� ��ϰ� ��ü ��� �ð���
 * �������� ����Ѵ�. �÷��̸���Ʈ���� �ִ� 5� ����� �� �ִ�.
 *
 * �ۼ���: ������
 * ��¥:  2025.06.7
 * ����: v1.0
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
        {"�� ���� ����", "�ں���", "ballad", 316},
        {"How Long", "Charlie Puth", "pop", 198},
        {"I'm Fine", "��ź�ҳ��", "hip-hop", 209},
        {"����", "��ź�ҳ��", "hip-hop", 274},
        {"Awake", "��ź�ҳ��", "ballad", 226},
        {"�Ƴ���", "MINO", "hip-hop", 241}
    };

    SONG playlist[MAX_PLAYLIST];
    int playlist_count = 0;
    int total_duration = 0;

    while (playlist_count < MAX_PLAYLIST) 
    {
        printf("����\t\t\t��Ƽ��Ʈ\n");
        for (int i = 0; i < MAX_SONGS; i++)
        {
            printf("%d: %s\t\t%s\n", i + 1, songs[i].title, songs[i].artist);
        }

        int choice;
        printf("�÷��̸���Ʈ�� �߰��� �� ��ȣ? ");
        scanf("%d", &choice);

        if (choice < 1 || choice > MAX_SONGS) 
        {
            printf("�߸��� �� ��ȣ�Դϴ�.\n");
            continue;
        }

        
        playlist[playlist_count] = songs[choice - 1];
        total_duration += songs[choice - 1].duration;
        playlist_count++;

       
        printf("<< �÷��̸���Ʈ >>\n");
        for (int i = 0; i < playlist_count; i++) {
            printf("%s\n%s\n", playlist[i].artist, playlist[i].title);
        }
        printf("�� ����ð� : %d��\n", total_duration);
    }

    return 0;
}