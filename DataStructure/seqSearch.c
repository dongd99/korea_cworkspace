#include <stdio.h>

void main() {
	/*
		순차 탐색 - 처음부터 끝까지 순서대로 찾음
		이진 탐색 - 정렬된 데이터를 둘(좌, 우)로 나눠서 찾는 값의 범위를 좁혀가는 방법
	*/


	int a[] = { 1,2,3,4,5,6,7,8,9,10, 11, 12, 13, 14, 15, 16, 17,77, 105, 113, 510, 513, 749, 1003, 1959,30032, 19392 };
	int i;
	int x = 106;

	printf("=======순차 검색 =========\n");
	for (i = 0; i < 9; i++) {
		if (a[i] == x) {
			printf("%d는 a[%d]에 있습니다.\n", x, i);
		}
	}
	printf("=======이진 검색=======\n");
	//최소와 최대의 합 인덱스(0+8)의 반(/2)을 나눠서 중간 인덱스(4)를 구함
	// 중간인덱스보다 크다면 중간인덱스가 최소 인덱스로 됨 그 후 위와 똑같이 진행
	// (4 +8)/2 = 6 
	int size = sizeof(a) / sizeof(a[0]);

	int minIndex = 0;
	int maxIndex = size-1;

	//for (int i = 1; i < size; i++) {
	//	if (a[i] < a[minIndex]) {
	//		minIndex = i;
	//	}
	//	if (a[i] > a[maxIndex]) {
	//		maxIndex = i;
	//	}
	//}
	int midIndex = 0;
	int flag = 1;
	while(flag){
		midIndex = (maxIndex + minIndex) / 2;
		if (a[maxIndex]<x || a[minIndex]>x) {
			printf("값이 없습니다.");
			break;
		}
		if (a[midIndex] == x) {
			printf("%d의 위치는 %d 입니다.\n", x, midIndex);
			flag = 0;
			break;
		}
		if (a[midIndex] < x) {
			minIndex = midIndex+1;

		}
		else {
			maxIndex = midIndex-1;
		}
		printf("%d\n", midIndex);
	}
}