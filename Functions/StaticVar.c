#include <stdio.h>
/*
	정적 변수( 고정된 변수) - static을 변수 앞에 붙임
*/
void call() {

	static int x = 0;
	x += 1;
	printf("현재 호출은 %d번째입니다.\n", x);
}


int main()
{
	call();
	call();
	call();
	call();

	return 0;
}