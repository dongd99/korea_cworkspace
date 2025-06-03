#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	바이너리 파일 읽고 쓰기
	- Byte 기반 파일
	- .dat , .db, 이미지, 음성, 영상
*/
int main() {
	//파일열기
	//데이터 패킷 보내기
	int bur1[4] = { 0xff, 0x56, 0x78, 0xfa };
	int bur2[4];// 읽은 데이터 저장할 배열

	FILE* fp;
	fp = fopen("datas.dat", "wb");//바이너리 파일의 쓰기 모드는 wb이다.
	if (fp == NULL) {
		perror("파일 열기 실패\n");
		return 1;
	}

	// 파일 쓰기 - size_t형 = int 형
	// fwrite(버퍼, 하나버퍼크기, 길이, 파일)
	fwrite(bur1, sizeof(int), 4, fp);

	// 파일 종료
	fclose(fp);
	//바이너리 파일 읽기
	fp = fopen("datas.dat", "rb");//바이너리 파일의 읽기 모드는 rb이다.
	if (fp == NULL) {
		perror("파일 열기 실패\n");
		return 1;
	}
	fread(bur2, sizeof(int), 4, fp);
	//콘솔 창에 출력(표준 출력 스트림)
	printf("%x %x %x %x\n", bur2[0], bur2[1], bur2[2], bur2[3]);
	printf("%d %d %d %d\n", bur2[0], bur2[1], bur2[2], bur2[3]);
	fclose(fp);


	return 0;
}