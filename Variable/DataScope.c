//#include <stdio.h>
//#define _CRT_NO_SECURE_WARNINGS
//
///*
//	자료형의 범위
//
//
//*/
//int main() {
//	/*
//		아스키코드로
//		char 형은 1바이트지만 그 중 1비트는 부호 비트로 
//		7비트로만 계산하면 된다.
//		char = -128 ~ 127
//		unsigned char : 0~ 255(부호없는 자료형)
//
//		*/
//
//	printf("==== char 자료형 -====\n");
//	char ch = 'A';
//	
//
//	printf("%c %d\n", ch, ch);  
//	
//	char value1 = -128;
//	printf("%d\n", value1);
//	char value2 = 128;// 오버플로우 발생
//	printf("%d\n", value2);
//	unsigned char value3 = 129;
//	printf("%d\n", value3);
//
//	/*
//		int형  4byte = 32bit
//		long - windowOS - 4Byte , MacOS - 8Byte
//		long long - 8Byte
//	*/
//	printf("=====int 자료형 ====\n");
//	int iNum = 2100000000;
//	printf("%d\n", iNum);
//	int iNum2 = 2200000000;// 오버플로우 발생
//	printf("%d\n", iNum2);
//	long long llNum = 22000000000l;//long long은 숫자 뒤에 'L' 또는 'l'을 넣어준다.
//	printf("%lld\n", llNum);
//
//	/*
//		실수형 = 소수점이 있는 수
//		float = 4byte,  소수점 6자리까지 표시('f'나 'F'를 붙임)
//		double = 8byte, 소수점 15자리까지 표시
//	*/
//	printf("====float 와 double 자료형 ====\n");
//	float fNum = 0.1234567F;
//	printf("%f\n", fNum);
//
//	double dNum = 0.123456789012345;
//	printf("%.15lf\n", dNum);
//
//
//
//
//	return 0;
//}
