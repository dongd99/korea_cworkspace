#include <stdio.h>	

int main() {

	//변수값 교환하기
	int x = 1;
	int y = 2;
	printf("x = %d, y = %d\n", x, y);
	printf("^^^^^교환 전^^^^^\n");
	int temp;// 교환을 위한 변수

	temp = x;
	x = y;
	y = temp;
	printf("x = %d, y = %d\n", x, y);
	printf("^^^^^교환 후^^^^^\n");
	printf("\n");

	//복합 대입 연산자는 산술과 대입이 합쳐진거
	int val = 10;
	
	val += 3; //val = val + 3;
	printf("%d\n", val);
	val -= 3;
	printf("%d\n", val);













	return 0;
}