#include <stdio.h>	
#define PI 3.141592
/*
	���(constant) - ����� �� ���� ��
	1. ��ũ�� ���
	2. const �ڷ���



*/

int main() {

	const int MIN_NUM = 1; //���
	const int MAX_NUM = 100;

	//MIN_NUM = 0; // ���� ������ �� ����(���Ҵ� ��)

	printf("%d\n", MIN_NUM);
	printf("%d\n", MAX_NUM);

	//���� ���� ���
	int radius = 10;
	//const double PI = 3.141592;
	double area;
	printf("%lf\n", PI);
	area = radius * radius * PI;
	printf("%.2lf\n", area);

	




	return 0;
}