#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {

	//난수(무작위수) 사용
	//srand(10); //  시드(seed)배정
	srand(time(NULL)*0.32* ceil(time(NULL)-sqrt(time(NULL))));


	/*int rndVal = rand();
	printf("%d\n", rndVal);*/

	//동전(2가지 경우)
	for (int i = 0; i <= 10; i++) {
		int coin = rand() % 2;
		printf("%d\n", coin);

		if (coin % 2 == 0) {
			printf("앞면\n");
		}
		else {
			printf("뒷면\n");
		}
		//Sleep(500);
	}

	for (int i = 0; i <= 10; i++) {
		int coin = rand() % 3;
		printf("%d\n", coin);
		switch (coin) {
		case 0:
			printf("가위\n");
			break;
		case 1:
			printf("바위\n");
			break;
		case 2:
			printf("보\n");
			break;
		default:
			printf("없음\n");
		}

	}
	for (int i = 0; i < 10; i++) {
		int dice = rand() % 6 + 1;
		printf("주사위 숫자는 : %d\n", dice);
	}


	return 0;
}