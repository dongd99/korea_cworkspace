#include <stdio.h>
#include <stdlib.h>// srand(), rand()
#include <time.h> // time(). clock()
#include <string.h>
/*
	영어 타자 겜
	- 영어 단어가 랜덤하게 출제됨
	- 사용자가 입력해서 단어가 일치하면 "통과!", 아니면 "다시 도전!"
	- 라이프는 총 10회 이고, 게임 소요시간을 측정함
*/
void main() {

	char* words[] = { "ant", "bear", "chicken", "deer", "elephant", "fox", "giraffe", "horse", "monkey", "lion", "tiger" };
	char* words2[] = { "stdio.h", "#include", "void main", "domain-lookup", "strcmp();", "lookup", "[1010]" };

	char* question;// 문제(랜덤하게 추출된 단어)

	char answer[30];// 사용자가 입력할 단어

	int n = 1;// 문제 번호
	int life = 10;
	clock_t start, end;// 시작과 종료 시간
	double elapsedTime; //소요시간

	//랜덤 시드 설정
	srand(time(NULL));
	int size1 = sizeof(words) / sizeof(words[0]);
	int size2 = sizeof(words2) / sizeof(words2[0]);

	printf("영어 타자 게임, 준비되면 엔터");
	getchar();

	start = clock();// 시작 시간
	while (n <= 10) {

		printf("\n문제 %d\n", n);
		int rndindex = rand() % size1;
		question = words[rndindex];
		printf("%s\t 라이프 = %d\n", question, life);
		scanf_s("%s", answer, sizeof(answer));
		if (strcmp(answer,question) == 0) {
			printf("정답!\n");
			n += 1;
		}
		else {
			printf("오답, 라이프 -1");
			life -= 1;
			
		}
		if (n > 10 ||life <= 0) {
			break;
		}
	}


	end = clock();
	elapsedTime = (double)(end - start) / CLOCKS_PER_SEC;
	printf("게임 소요 시간 : %.2lf초", elapsedTime);
	

	printf("영어 타자 게임 2단계, 준비되면 엔터");
	getchar();
	
	start = clock();// 시작 시간
	n = 1;
	while (n <= 10) {

		printf("\n문제 %d\n", n);
		int rndindex = rand() % size2;
		question = words2[rndindex];
		printf("%s\t 라이프 = %d\n", question, life);
		scanf_s("%s", answer, sizeof(answer));
		if (strcmp(answer, question) == 0) {
			printf("정답!\n");
			n += 1;
		}
		else {
			printf("오답, 라이프 -1");
			life -= 1;

		}
		if (n > 10 || life <= 0) {
			break;
		}
	}

	end = clock();
	elapsedTime = (double)(end - start) / CLOCKS_PER_SEC;
	printf("게임 소요 시간 : %.2lf초", elapsedTime);






}