#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE* fp;

	fopen_s(&fp, "gugudan.txt", "w");
	if (fp == NULL) {
		perror("파일 열기에 실패\n");
		return 1;
	}
	for (int i = 2; i < 10; i++) {
		fprintf(fp, "===%d단===\n", i);
		for (int j = 1; j < 10; j++) {
			
			fprintf(fp, "%2d x %2d = %2d\n", i, j, i * j);
		}

	}
	fclose(fp);
	fopen_s(&fp, "gugudan.txt", "r");
	char buf[256];
	while (fgets(buf, sizeof(buf), fp) != NULL) {
		printf("%s", buf);
	}
	fclose(fp);




	return 0;
}