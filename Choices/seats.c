#include <stdio.h>	

int main() {

	//자리배치도 프로그램
	int seats;
	int column;
	printf("입장객 수를 입력하세요");
	scanf_s("%d", &seats);
	printf("좌석 열을 입력하세요:");
	scanf_s("%d", &column);
	for (int i = 1; i <= seats; i++)
	{
		printf("좌석%2d \t", i);
		if (i % column == 0)printf("\n");
	}



	return 0;
}