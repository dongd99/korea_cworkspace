#include <stdio.h>	
#define _CRT_NO_SECURE_WARNINGS


/*
	자료형의 변환
*/



int main() {

	//묵시적 형변환(자동 형변환)
	int iNum = 20;
	float fNum = iNum;
	
	printf("%d\n", iNum);
	printf("%.1f\n", fNum);
	printf("%.1f\n", fNum+iNum);

	//명시적 형변환(강제 형변환)
	//변환할 자료형을 소괄호로 묶어준다아
	//(int) , (double), (float)

	double dNum = 2.54;
	int iNum2;
	iNum2 = (int)dNum;
	printf("%d\n", iNum2);


	//연산
	dNum = 1.2;
	fNum = 0.9f;

	iNum = (int)dNum + (int)fNum;
	printf("%d\n", iNum);

	iNum = (int)(dNum + fNum);
	printf("%d\n", iNum);


















	return 0;
}