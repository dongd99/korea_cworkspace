#include <stdio.h>

void calcSum(int x, int y);

void main() {

	int x = 1;
	int y = 5;
	int i;
	int sum = 0;

	for (i = x; i <= y; i++) {
		sum += i;
	}
	printf("%d\n", sum);
	calcSum(10, 1);
	//int x = 10;

	//int* ptr = &x;
	//// %p, %x -> �ּҿ� �����ϴ� ���� ��ȣ
	//printf("%d %p\n", x, &x);
	//printf("%d %p\n",*ptr, ptr);




}

void calcSum(int x, int y) {
	int i;
	int sum = 0;
	if (x > y) {
		for (i = x; i >= y; i--) {

			sum += i;
		}
		printf("%d", sum);
	}
	else {
		for (i = x; i <= y; i++) {

			sum += i;
		}
		printf("%d", sum);
	}
	
}