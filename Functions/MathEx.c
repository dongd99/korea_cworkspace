#include <stdio.h>
#include <math.h>

/*
	���а��� �Լ�
*/

int main() {

	//�ݿø�
	printf("%f\n", round(2.54));
	printf("%f\n", round(2.34));

	//����(����)
	printf("%.1f\n", floor(2.54));
	printf("%.1f\n", floor(2.24));

	//�ø�
	printf("%.1f\n", ceil(2.674));
	printf("%.f\n", ceil(2.14));
	
	//���밪
	printf("%.d\n", abs(-343));
	printf("%.d\n", abs(43));

	//�ŵ�����
	printf("%.f\n", pow(10, 4));

	//������
	printf("%f\n", sqrt(100));
	printf("%f\n", sqrt(5));


	return 0;
}