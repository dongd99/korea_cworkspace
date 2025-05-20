#include <stdio.h>
/*
	포인터의 계산(연산)

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

	//배열과 포인터의 연산

	int a[5] = { 1,2,3,4,5 };
	int* pa;

	printf("기존 배열 a의 값 출력\n");
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