#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
/*
	
*/
void main() {
	int coin;
	int you;
	int winTime = 0;
	//char aspect[][6] = {"앞면", "뒷면"};
	char* aspect[] = {"", "앞면", "뒷면" };

	//printf("%s\n", aspect[0]);
	srand(time(NULL));

	printf("앞면은 1, 뒷면은 2, 종료는 다른 값을 입력하세요\n");
	while (1) {
		coin = rand() % 2+1;
		printf("동전을 던졌습니다. 앞면? 뒷면? :");
		scanf_s("%d", &you);
		printf("\n사용자 : %s, 동전: %s\n", aspect[you], aspect[coin]);	
		
		if (you < 1 || you>2) {
			break;
		}
		else {
			if (coin == you) {
				printf("완전히 정답이군요!\n");
				winTime += 1;
				printf("연속 %d번 맞춤!\n", winTime);
			}
			else {
				printf("틀렸습니다ㅜㅜ\n");
				winTime = 0;
			}
			Sleep(300);
		}
		
	}









}