//#include <stdio.h>
//#define _CRT_SECURE_NO_WARNINGS
///*
//	변수 - 프로그램에서 데이터를 저장하는 메모리 공간
//	자료형 - 문자(char), 정수(int), 실수(float)
//*/
//
//int main() {
//	//변수 선언 방법 = 자료형 변수이름;
//	int n1; //
//	int n2 = 10;//선언과 동시에 초기화
//
//
//	n1 = 5;// 값을 초기화 
//	printf("%d %X\n", n1, &n1);
//	//주소 연산자 & 사용해야한다.
//	printf("%d%X\n",n2, &n2);
//
//
//	printf("두수의 합:%d\n", n1 + n2);
//	printf("두수의 차:%d\n", n1 - n2);
//
//	//실수형 변수 선언
//	//실수형의 서식 문자형 : %lf
//	double rateOfBirth = 0.75;
//
//	printf("대한민국의 24년도의 출산율 : %.2lf\n", rateOfBirth);
//
//	//문자형 변수 선언, 작은 따옴표 사용
//	char grade = 'A';
//	//한 문자를 char라고 합니당
//	printf("A 호텔의 서비스 등급 : %c\n", grade);
//
//	//문자열 배열 선언 [] 큰 따옴표 사용
//	char nameOfFruit[] = "사과";
//
//	printf("그 과일의 이름은 %s 입니다\n", nameOfFruit);
//	
//	//변수 이름 작성시 의미가 있게 만들고 , 카멜 표기법을 사용한다.
//
//	//변수 이름 작성 시 오류나는 것들
//	//숫자로 시작해서는 안된다.
//	//특수문자는 _ 밑줄기호만 가능하다.(공백도 특수문자에 포함)
//	//영어와 숫자 특수기호(_)으로 작성해야한다.
//	//예약어(키워드)를 사용할 수 없다.
//	// int break = 23;
//	// int #name = 23;
//
//	//자료형의 크기 = sizeof()
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(char));
//	long long num13 = 9876543210987654321;
//	return 0;
//}