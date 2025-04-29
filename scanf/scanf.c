#include <stdio.h>

void main() {
	int num;
	while (1) {

		printf("숫자를 입력하세요:");
		int result = scanf_s("%d", &num);
		if (result == 1) {

			printf("%d\n", result);
		}
		else {

			//버퍼(임시기억공간) 비우기
			//'\n' (제어문자 - LF(10))
			while (getchar() != '\n') {//'\n' 이 나올때까지 모든 문자 제거
				printf("잘못된 입력입니다.\n");
			}
		}
	}

}