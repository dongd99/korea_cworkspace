#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <Windows.h>


int main() {

	time_t ct;//현재 시간 변수 선언
	struct tm* now; //구조체 변수 선언

	//현재 시간 가져오기
	
	
	while (1) {
		ct = time(NULL);
		now = localtime(&ct);// ct의 주소를 매개로 전달
		printf("%d년 ", now->tm_year + 1900);
		printf("%d월 ", now->tm_mon + 1);
		printf("%d일 ", now->tm_mday);
		printf("%d시 ", now->tm_hour);
		printf("%d분 ", now->tm_min);
		printf("%d초\n", now->tm_sec);
		Sleep(1000);
	}


	return 0;
}