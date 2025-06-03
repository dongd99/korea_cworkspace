#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE* fp;
	//문자열을 출력해보자

	//문자열 저장 부터~
	char str[] = "abcdefg\nhijklmn\nopqrstu\nvwxyz";
	fopen_s(&fp, "data.txt", "w");
	if (fp == NULL) {
		printf("파일 열기에 실패\n");
		return 1;
	}
	fprintf(fp, "%s\n", str);
	fclose(fp);

	//문자열 출력하자
	int ch, i;
	i = 1;
	char buf[256];//문자를 저장할 배열 생성

	fopen_s(&fp, "data.txt", "r");
	if (fp == NULL) {
		printf("파일 열기에 실패\n");
		return 1;
	}
	//fgetc()로 읽기
	/*while ((ch = fgetc(fp)) != EOF) {
		printf(" %c ", ch);
	}*/

	//fgets(저장데이터 , 데이터크기, 파일)로 읽기
	while (fgets(buf, sizeof(buf), fp) != NULL){
		printf("%03d: %s",i++, buf);
	}
	fclose(fp);

	//정리하며
	/*
		파일 쓰기
		- fputs(fp) 
		- fprintf()
	*/

	return 0;
}