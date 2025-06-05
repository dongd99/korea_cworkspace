#include <stdio.h>
/*
	토글 알고리즘 - 상태(플래그)를 바꾸는 알고리즘
	- 대표적으로 한영키, Caps(대소문자)
	- 어떤 상태가 계속 유지되는 것

*/
int main() {

	int a[] = { 9,8,7, 6, 7,1,43,8,7 };
	int count = 0;
	// 7을 찾기
	for (int i = 0; i < (sizeof(a)/sizeof(a[0])); i++) {
		if (a[i] == 7) {
			printf("7을 찾았습니다 . %d번째 인덱스에 있습니다.\n", i);
			count += 1;
		}
	}
	char code = '=';
	printf("7은 %d개 있습니다.\n", count);
	printf("=====================\n");
	
	//7을 1개 발견하면 종료
	int sw = 0; // 상태 변수  or 플래그 0 = false 1 = true
	
	// 7을 찾기
	for (int i = 0; i < (sizeof(a) / sizeof(a[0])); i++) {
		if (a[i] == 7) {
			printf("7을 찾았습니다 . %d번째 인덱스에 있습니다.\n", i);
			sw = 1;
			break;
		}
		
	}
	if (sw == 0) {
		printf("7 못찾았읍니다..\n");
	 }



	return 0;
}