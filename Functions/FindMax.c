#include <stdio.h>	




int findMax(int arr[]);//�Լ� �����

int main() {

	int a[] = { 21, 23, 55, 63, 29, 93 };

	int max;

	max = findMax(a, 6);
	printf("a�迭�� �ִ밪��? %d", max);


	return 0;
}

//�ִ밪�� ����ϴ� �Լ� ����(������)
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