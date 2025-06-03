#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
	텍스트 파일 복사하기
*/
int main() {
	FILE* fin, * fout;
	int input = 0;// 문자 코드 값 자정할 변수 선언

	fopen_s(&fin, "gugudan.txt", "r");
	fopen_s(&fout, "gugudan2.txt", "w");

	if (fin == NULL || fout == NULL) {
		perror("파일 열기 오류\n"); 
		return -1;
	}

	puts("파일에 데이터 쓰기(저장)\n");

	// 파일 읽어서 쓰기
	while (input != EOF) {
		input = fgetc(fin);
		fputc(input, fout);

	}
	fclose(fin);
	fclose(fout);





	return 0;
}