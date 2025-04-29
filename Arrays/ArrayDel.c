#include <stdio.h>	
#define _CRT_NO_SECURE_WARNINGS
#define MAX_LEN 5//매크로 상수
void main() {

	//배열의 요소 삭제
	const int size = 5;
	int arr[MAX_LEN] = { 1, 2, 3, 4, 5 };

	//전체 출력
	for (int i = 0; i < 5; i++) {

		printf("%d ", arr[i]);


	}
	arr[2] = 0;
	for (int i = 2; i < 4; i++) {
		arr[i] = arr[i + 1];
	}
	for (int i = 0; i < 5; i++) {

		printf("%d ", arr[i]);


	}
	
}