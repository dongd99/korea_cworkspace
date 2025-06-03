#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {

	FILE* fp;
	int ch; // 아스키 코드를 읽어서 저장할 변수

	//파일 열기 및 쓰기
	fp = fopen("ascii.txt", "w");
	if (fp == NULL) {
		printf("파일 열기에 실패함\n");
		return 1;
	}
	printf("=====ASCII 테이블 =====\n");
	for (int i = 32; i < 128; i++) {
		if (i % 10 == 0) 
			fputc('\n', fp);
		fputc(i, fp);
		fputc('\t', fp);
	}
	fclose(fp);

	//파일 열기          및 읽기
	fp = fopen("ascii.txt", "r");
	if (fp == NULL) {
		printf("파일 읽기에 실패\n");
		return 1;
	}
	while (1) {
		ch = fgetc(fp);
		if (ch == EOF)break;
		printf("%c", ch);
	}
	fclose(fp);//파일 닫기

	//








	return 0;
}