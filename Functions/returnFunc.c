#include <stdio.h>	

int square(int x) {
	return x * x;
}
//절대값을 계산하는 함수
int abs(int x) {
	if (x < 0) {
		x = -x;
	}
	return x;
}
//두 수를 더하는 함수 정의
double add(double x, double y) {
	return x + y;
}
void main() {

	int sagak, value;
	double dvalue;
	sagak= square(13);
	value = abs(-343);
	printf("%d\n%d", sagak, value);
	dvalue = add(23.3, 44.67);
	printf("%lf\n", dvalue);



}