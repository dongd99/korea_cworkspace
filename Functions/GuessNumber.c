#include <stdio.h>	
#include <math.h>
/*
	숫자 추측 게임
	- 컴퓨터가 난수를 생성
	- 사용자가 예측한 수를 입력
		1. 정답
		2. 난수보다 추측 수가 높을 때
		3. 난수보다 추측 수가 낮을 때
*/
int main() {

	srand(time(NULL)+ time(NULL)+ time(NULL)*3.14);
	int randNum;//컴퓨터가 생성한 난수
	int guessNum;// 사용자가 추측한 수
	int count = 5; // 시도한 횟수

	randNum = rand() % 50 + 1;// 1~50까지의 난수
	//printf("컴퓨터의 난수 %d\n", randNum);
	while (1) {

		printf("남은 시도 횟수 = %d번\n", count--);
		printf("숫자 입력(1~50) : ");
		scanf_s("%d", &guessNum);
		if (guessNum == randNum) {
			printf("정답입니다 %d 남기고 맞추셨습니다. 컴퓨터의 수: %d\n", count, randNum);
			break;
		}
		else if(guessNum > randNum) {
			printf("오답입니다 %d 보다 작습니다.\n", guessNum);
		}
		else {
			printf("오답입니다 %d 보다 높습니다.\n", guessNum);
		}
		

		if (count == 0) {
			printf("남은 횟수가 없습니다 . 패배...");
			break;
		}

	}

	



	return 0;
}