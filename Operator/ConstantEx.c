#include <stdio.h>	
#define PI 3.141592
/*
	상수(constant) - 변경될 수 없는 값
	1. 매크로 상수
	2. const 자료형



*/

int main() {

	const int MIN_NUM = 1; //상수
	const int MAX_NUM = 100;

	//MIN_NUM = 0; // 값을 변경할 수 없음(재할당 놉)

	printf("%d\n", MIN_NUM);
	printf("%d\n", MAX_NUM);

	//원의 넓이 계산
	int radius = 10;
	//const double PI = 3.141592;
	double area;
	printf("%lf\n", PI);
	area = radius * radius * PI;
	printf("%.2lf\n", area);

	




	return 0;
}