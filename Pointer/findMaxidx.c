#include <stdio.h>
/*
	- 최대값의 위치 찾기
	- 포인터 배열에서 최대값의 위치를 찾아보자잉
*/
int findMaxidx(int[], int);
int findMaxidx2(int*, int);
int main() {

	int arr[] = { 3, 51, 54, 23, 55, 10, 62, 120 };
	int max1, max2;
	max1 = findMaxidx(arr, 8);
	printf("%d\n", max1);
	max2 = findMaxidx2(arr, 8);
	printf("%d\n", max2);





	return 0;
}
int findMaxidx(int a[], int len) {
	int maxIndex, i;
	maxIndex = 0;
	for (i = 0; i < len; i++) {
		if (a[i] > a[maxIndex]) {
			maxIndex = i;
		}
	}
	return maxIndex;
}

int findMaxidx2(int* a, int len) {
	int maxIndex, i;
	maxIndex = 0;
	for (i = 0; i < len; i++) {
		if (*(a + i) > *(a + maxIndex)) {
			maxIndex = i;
		}
	}
	return maxIndex;
} 