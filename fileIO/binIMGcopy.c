#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define BUFFER_SIZE 4096
/*
	이미지 파일 복사하기
*/
int main() {
	FILE* fp;
	fp = fopen("img.png", "rb");
	FILE* fout;
	fout = fopen("img2.png", "wb");//바이너리 파일의 쓰기 모드는 wb이다.
	if (fp == NULL || fout == NULL) {
		perror("파일 열기 실패\n");
		return 1;
	}
	//버퍼를 이용한 복사
	int buf[BUFFER_SIZE];
	int bytesRead;//읽은 바이트 저장

	while ((bytesRead = fread(buf, sizeof(int), BUFFER_SIZE, fp)) > 0) {
		fwrite(buf, sizeof(int), bytesRead, fout);
	}
	fclose(fp);
	fclose(fout);






	return 0;
}