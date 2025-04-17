//#include <stdio.h>
//
//int main()
//{
//	int num1 = 5;  //00000101
//	int num2 = 10; //00001010
//	int result;
//
//	result = num1 & num2;//논리합이기 때문에 둘다 1이여야 1을 반환
//	printf("result = %d\n", result);
//
//	result = num1 | num2;
//	printf("result = %d\n", result);
//
//	//비트 이동 
//	int num3 = 2;//0010
//	int val1, val2, val3;
//
//	val1 = num3 << 2;
//	printf("val1 = %d\n", val1);//00001000
//	val2 = val1 << 3;
//	printf("val2 = %d\n", val2);//01000000
//
//
//
//	int bit1 = 12;
//	int bit = 10;
//	bit = ~bit;// 1의보수를 구한다.
//	bit = bit +1; // 2의 보수 구하는 것
//	printf("\n%d\n", bit1 + bit);
//
//	return 0;
//}