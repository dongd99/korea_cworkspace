#include <stdio.h>	
//����� ���� ��������� ���� ��ȣ�� �ƴ� �ֵ���ǥ�� ����ؾ���
#include "calculator.h"


int main() {
	
	int x = 3, y = 4;
	int value1;
	value1 = add(x, y);
	printf("%d\n", value1);
	
	value1 = factorial(y);
	printf("%d! = %d\n", y ,value1);



	return 0;
}