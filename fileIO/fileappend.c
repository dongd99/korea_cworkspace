#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
	파일 쓰기 추가 모드 = "a"
*/
int main() {
	FILE* fp;
	char msg[] = "오늘은 대통령 선거날입니다.";
	fp = fopen("out.txt", "w");
	if (fp == NULL) {
		printf("파일 열기 실패");
		return 1;
	}
	fputs("Gook luck\n", fp);
	fclose(fp);
	//파일 추가로 쓰기
	fp = fopen("out.txt", "a");
	if (fp == NULL) {
		printf("파일 열기 실패\n");
		return 1;
	}
	fputs("See you Soon~\n", fp);
	//서식 문자 사용
	fprintf(fp, "%s\n", "행운을 빌어요!");
	fprintf(fp, "%s\n", msg);
	fclose(fp);

	printf("파일 쓰기 완료!");


	return 0;
}