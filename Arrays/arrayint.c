//#include <stdio.h>
//#define _CRT_NO_SECURE_WARNINGS
///*
//	배열(array) - 동일한 자료형의 여러 개의 값을 저장할 때 사용하는 자료구조
//	- 배열의 각각의 값을 요소라고 하며, 
//	- 배열의 값의 위치를 인덱스로 구분한다.
//	- 배열의 선언 : 자료형 배열명[크기];
//*/
//
//int main() {
//
//	//배열의 필요성 - 변수를 많아지면 비효율적으로 코딩하기 때문
//	//int num1 = 10;
//	//int num2 = 20;
//	//int num3 = 30;
//
//	//printf("%d, %d, %d\n", num1, num2, num3);
//
//	int num[4];// 배열의 크기가 4인 정수형 num이라는 배열
//
//	//요소의 추가 및 수정 
//	num[0] = 10;
//	num[1] = 20;
//	num[2] = 30;
//	num[3] = 40;
//
//	//배열의 선언과 동시에 초기화
//	int num1[4] = { 10, 20, 30, 40 };
//	for (int i = 0; i < 4; i++) {
//		printf("%-3d", num[i]);
//	}
//	printf("\n");
//
//	printf("%x %x %x \n", &num[0], &num[1], &num[2]);
//	printf("%x %x %x \n", num, num+1, num+2);
//	//배열의 이름은 주소를 가진다.
//	printf("%d, %d, %d \n", sizeof(num[0]), sizeof(num[1]), sizeof(num[2]));
//
//
//	return 0;
//}