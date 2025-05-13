#include <stdio.h>

int main() {
	/*
	* 포인터는 메모리의 주소를 저장하는 변수
	*/

	int n;
	int* pn; // pn이라는 이름의 정수형 포인터 선언

	n = 3;
	pn = &n;

	n = 33;
	printf("변수의 값 : %d\n", n);
	printf("변수의 메모리 번지 값 : %x\n", &n);
	printf("포인터가 가지는 메모리의 위치 : %x\n", pn);
	printf("포인터의 메모리 위치 : %x\n", &pn);
	printf("포인터가 가지는 메모리의 값 : %d\n", *pn);
	
	int a = 10;
	printf("변수의 값 : %d\n", a);
	int* pa;
	pa = &a;

	*pa = 33;
	printf("*pa = 33을 한 *pa 값 : %d\n", *pa);
	printf("변수의 메모리 번지 값 : %x\n", &a);
	printf("포인터가 가지는 메모리의 위치 : %x\n", pa);
	printf("포인터의 메모리 위치 : %x\n", &pa);
	printf("포인터가 가지는 메모리의 값 : %d\n", *pa);
	






	return 0;
}