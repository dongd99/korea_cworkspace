#include <stdio.h>	




int findMax(int arr[]);

int main() {

	int a[] = { 21, 23, 55, 63, 29, 93 };

	int max;

	max = findMax(a, 6);
	printf("a배열의 최대값은? %d", max);


	return 0;
}

//최대값을 계산하는 함수 정의
int findMax(int arr[], int len) {
	int maxVal = 0;
	for (int i = 0; i < len; i++)
	{
		if (arr[i] > maxVal) {
			maxVal = arr[i];
		}
	}
	return maxVal;

}