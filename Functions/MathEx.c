#include <stdio.h>
#include <math.h>

/*
	수학관련 함수
*/

int main() {

	//반올림
	printf("%f\n", round(2.54));
	printf("%f\n", round(2.34));

	//내림(버림)
	printf("%.1f\n", floor(2.54));
	printf("%.1f\n", floor(2.24));

	//올림
	printf("%.1f\n", ceil(2.674));
	printf("%.f\n", ceil(2.14));
	
	//절대값
	printf("%.d\n", abs(-343));
	printf("%.d\n", abs(43));

	//거듭제곱
	printf("%.f\n", pow(10, 4));

	//제곱근
	printf("%f\n", sqrt(100));
	printf("%f\n", sqrt(5));


	return 0;
}