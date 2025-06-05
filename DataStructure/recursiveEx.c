#include <stdio.h>
/*
	재귀(recursive)알고리즘 : 자기 자신을 호출(함수)하는 것을 의미
	함수 내부에 같은 자기 자신 함수() 호출
	무한 반복 하므로 종료 조건이 필수
*/
void sos(int n) {
	printf("%d HELP ME!\n",n);
	if (n-- == 0) return;
	sos(n);
	printf("%d\n", n);
}


int main() {
	sos(14);



	return 0;
}