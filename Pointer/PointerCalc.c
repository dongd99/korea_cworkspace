#include <stdio.h>
/*
	�������� ���(����)

*/

int main() {

	int x = 10;
	int y = 20, z;


	int* arr[3];

	arr[0] = &x;
	arr[1] = &y;
	arr[2] = &z;

	*arr[2] = *arr[0] + *arr[1];

	printf("%d\n", *arr[2]);
	printf("%d\n", z);

	//�迭�� �������� ����

	int a[5] = { 1,2,3,4,5 };
	int* pa;

	printf("���� �迭 a�� �� ���\n");
	for (int i = 0; i < 5; i++)
		printf("%d\n", a[i]);

	pa = a;

	*pa = *pa + 10;
	printf("%d\n", *(pa));
	for (int i = 1; i < 5; i++) {
		*(pa + i) += 10;
		printf("%d\n", *(pa + i));
	}


	return 0;
}