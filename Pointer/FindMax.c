#include <stdio.h>
/*
	1.�迭���� �ִ밪 ã��
	2. ������ �迭���� �ִ밪 ã��
*/

int findMax(int[], int);
int findMax2(int*, int);

int main() {

	int arr[] = { 3, 51, 54, 23, 55, 10, 62, 120 };
	int max1, max2;
	max1 = findMax(arr, 8);
	printf("%d\n",max1);
	max2 = findMax2(arr, 8);
	printf("%d\n", max2);

	return 0;
}

int findMax(int a[], int len) {
	int maxVal;
	//�ִ밪 ����
	maxVal = a[0];
	for (int i = 0; i < len; i++) {
		if (a[i] > maxVal)
			maxVal = a[i];
	}
	return maxVal;
}
int findMax2(int* a, int len) {
	int maxVal;
	maxVal = *a;
	for (int i = 0; i < len; i++) {
		if (*(a + i) > maxVal) {
			maxVal = *(a + i);
		}
	}
	return maxVal;
}
