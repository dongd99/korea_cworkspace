#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <windows.h>
int main() {

	time_t ct = time(NULL);//현재 시간
	//tm 구조체 포인터의 변수 생성
	struct tm* now = localtime(&ct);// 현재 시간과 날짜 생성
	printf("현재 날짜: %d : %d : %d\n", now->tm_year + 1900, now->tm_mon + 1, now->tm_mday);
	char* days[] = {"일", "월", "화", "수", "목","금","토"};
	int index = now->tm_wday;
	printf("현재 요일 : %s요일\n", days[index]);
	while (1) {
		ct = time(NULL);
		now = localtime(&ct);
		int hour = (now->tm_hour - 12) ? now->tm_hour - 12 : now->tm_hour;
		char* ampm = (now->tm_hour > 12 ? "오후" : "오전");

		printf("현재 시간 %s: %d : %d : %d\n",ampm, hour, now->tm_min, now->tm_sec);
		Sleep(1000);
	}
	// 요일 추가하기
	
	

	return 0;
}