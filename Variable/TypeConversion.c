#include <stdio.h>	
#define _CRT_NO_SECURE_WARNINGS


/*
	�ڷ����� ��ȯ
*/



int main() {

	//������ ����ȯ(�ڵ� ����ȯ)
	int iNum = 20;
	float fNum = iNum;
	
	printf("%d\n", iNum);
	printf("%.1f\n", fNum);
	printf("%.1f\n", fNum+iNum);

	//����� ����ȯ(���� ����ȯ)
	//��ȯ�� �ڷ����� �Ұ�ȣ�� �����شپ�
	//(int) , (double), (float)

	double dNum = 2.54;
	int iNum2;
	iNum2 = (int)dNum;
	printf("%d\n", iNum2);


	//����
	dNum = 1.2;
	fNum = 0.9f;

	iNum = (int)dNum + (int)fNum;
	printf("%d\n", iNum);

	iNum = (int)(dNum + fNum);
	printf("%d\n", iNum);


















	return 0;
}