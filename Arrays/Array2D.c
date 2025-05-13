#include <stdio.h>

int main() {

	int a[3][2];//2차원 배열 선언
	a[0][0] = 75;//각 인덱스 초기화
	a[0][1] = 80;
	a[1][0] = 85;
	a[1][1] = 90;
	a[2][0] = 95;
	a[2][1] = 100;
	//배열 출력
	printf("a[0][0] = %d\n", a[0][0]);

	//전체 출력 방법 1 - 단일 for문
	for (int x = 0; x < 3; x++) {
		printf("a[%d][0] = %d\na[%d][1] = %d\n",x, a[x][0],x,a[x][1]);
	}
	//전체 출력 방법 2 - 중첩 for문
	printf("\n");
	for (int x = 0; x < 3; x++) {
		for (int y = 0; y < 2; y++)
		{
			printf("a[%d][%d] = %d\n", x, y, a[x][y]);
		}

	}
	int arr[3][4];
	int k = 0;
	// 요소 저장
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			arr[i][j] = ++k;
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}


	return 0;
}