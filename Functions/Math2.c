#define _USE_MATH_DEFINES// math.h에 있는 상수 사용할거에요
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

	//원주율 - 상수(M_PI)
	printf("%.2f\n", M_PI);

	long long ans = pow(2, ceil(M_PI));
	printf("%d\n", (int)pow(2, 3));
	printf("%ld\n", ans);
	int a = myPow(2, 3);
	printf("%d\n", a);


	return 0;
}

