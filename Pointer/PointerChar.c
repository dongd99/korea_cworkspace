#include <stdio.h>
/*
	문자형 포인터


*/
int main() {

	char c = 'A';
	char* pc;
	pc = &c;

	printf("변수의  값 : %c\n", c);
	printf("변수의 메모리 번지 값 : %x\n", &c);
	printf("포인터가 가지는 메모리의 위치 : %x\n", pc);
	printf("포인터의 메모리 위치 : %x\n", &pc);
	printf("포인터가 가지는 메모리의 값 : %c\n", *pc);

	//포인터를 사용해서 변수 값 바꾸기
	*pc = 'B';
	printf("변수의  값 : %c\n", c);
	printf("변수의 메모리 번지 값 : %x\n", &c);
	printf("포인터가 가지는 메모리의 위치 : %x\n", pc);
	printf("포인터의 메모리 위치 : %x\n", &pc);
	printf("포인터가 가지는 메모리의 값 : %c\n", *pc);

	//자료형의 크기
	printf("%dbyte %dbyte\n", sizeof(c), sizeof(pc));

	return 0;
}