#define _USE_MATH_DEFINES// math.h�� �ִ� ��� ����Ұſ���
#include <stdio.h>
#include <math.h>

int myPow(int x, int y) {
	int sum = 1;
	for (int i = 1; i <= y; i++) {
		sum *= x;
	}
	return sum;
}

int main() {

	//������ - ���(M_PI)
	printf("%.2f\n", M_PI);

	long long ans = pow(2, ceil(M_PI));
	printf("%d\n", (int)pow(2, 3));
	printf("%ld\n", ans);
	int a = myPow(2, 3);
	printf("%d\n", a);


	return 0;
}

