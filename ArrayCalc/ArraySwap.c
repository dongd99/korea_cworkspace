#include <stdio.h>

void main() {

	//배열의 요소값 교환
	int a[5] = { 3,2,5,1,6 };
	int i, temp;
	//반복변수와 임시변수 생성
	
	//현 위치의 요소와 다음 요소 교환하기
	for (i = 0; i < 4; i++) {
		temp = a[i];
		a[i] = a[i + 1];
		a[i + 1] = temp;

	}
	for (i = 0; i < 5; i++) {

		printf("%d\n", a[i]);

	}





}