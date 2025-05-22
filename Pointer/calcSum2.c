#include <stdio.h>

/*
	x���� y������ �հ�
	1. �������
		1+2+3+4+5 = 15
	2. calcSum2(x, y) x>y�ΰ��, x<y�ΰ��
		
*/
void calcSum(int x, int y);
void calcSum2(int, int);
void swap(int*, int*);
int main() {

	calcSum(1, 5);
	calcSum(5, 1);
	calcSum2(1, 5);
	calcSum2(5, 1);





	return 0;
}

void calcSum(int x, int y) {
	int sum, i;
	if (x < y) {
		sum = x;
		printf("%d", sum);
		for (i = x + 1; i <= y; i++) {
			sum += i;
			printf("+%d", i);
		}
		printf("= %d\n", sum);
		printf("%d���� %d������ ���� %d\n", x, y, sum);
	}
	else {
		sum = y;
		printf("%d", sum);
		for (i = y + 1; i <= x; i++) {
			sum += i;
			printf("+%d", i);
		}
		printf("= %d\n", sum);
		printf("%d���� %d������ ���� %d\n", y, x, sum);
	}
}

void calcSum2(int x, int y) {
	if (x > y) {
		swap(&x, &y);
	}
	int sum, i;
	sum = x;
	printf("%d", sum);
	for (i = x + 1; i <= y; i++) {
		sum += i;
		printf("+%d", i);
	}
	printf("= %d\n", sum);
	printf("%d���� %d������ ���� %d\n", x, y, sum);
}
void swap(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}