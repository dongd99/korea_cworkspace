#include <stdio.h>	

int square(int x) {
	return x * x;
}
//���밪�� ����ϴ� �Լ�
int abs(int x) {
	if (x < 0) {
		x = -x;
	}
	return x;
}
//�� ���� ���ϴ� �Լ� ����
double add(double x, double y) {
	return x + y;
}
void main() {

	int sagak, value;
	double dvalue;
	sagak= square(13);
	value = abs(-343);
	printf("%d\n%d", sagak, value);
	dvalue = add(23.3, 44.67);
	printf("%lf\n", dvalue);



}