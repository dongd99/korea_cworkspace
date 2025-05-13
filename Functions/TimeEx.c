#include <stdio.h>
#include <time.h>
#include <Windows.h>


/*
	시간 함수 - time.h 포함
	- time_t 자료형을 사용

*/

int main() {
	
	time_t now;
	now = time(NULL);// time(NULL)은 시간이 계속 흐름을 의미

	//ld = long decimal
	printf("%ld초\n", now);//1970년 1월 1일 0시 0분 0초 이후의 초
	//일(day)로 환산
	printf("%ld일\n", now/(24* 60* 60));

	//년(year)로 환산
	printf("%ld년\n", now / (365 * 24 * 60 * 60));

	//수행시간 측정
	clock_t start, end;
	double spendTime;

	start = time(NULL);//시작시간
	printf("%ld\n", start);

	//1~10까지 출력
	for (int i = 1; i <= 10; i++) {
		printf("%d\n", i);
		Sleep(500);
	}
	end = time(NULL);//종료시간
	printf("%ld\n", end);
	printf("걸린 시간 : %ld초\n", end - start);

	clock_t startc, endc;


	startc = clock();//시작시간
	printf("%ld\n", start);

	//1~10까지 출력
	for (int i = 1; i <= 10; i++) {
		printf("%d\n", i);
		Sleep(500);
	}
	endc =clock();//종료시간
	spendTime = (double)(endc - startc);
	printf("%ld\n", end);
	printf("걸린 시간 : %lf\n", spendTime/1000);


	return 0;
}