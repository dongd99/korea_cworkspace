#include <stdio.h>

int main() {
	/*
	* �����ʹ� �޸��� �ּҸ� �����ϴ� ����
	*/

	int n;
	int* pn; // pn�̶�� �̸��� ������ ������ ����

	n = 3;
	pn = &n;

	n = 33;
	printf("������ �� : %d\n", n);
	printf("������ �޸� ���� �� : %x\n", &n);
	printf("�����Ͱ� ������ �޸��� ��ġ : %x\n", pn);
	printf("�������� �޸� ��ġ : %x\n", &pn);
	printf("�����Ͱ� ������ �޸��� �� : %d\n", *pn);
	
	int a = 10;
	printf("������ �� : %d\n", a);
	int* pa;
	pa = &a;

	*pa = 33;
	printf("*pa = 33�� �� *pa �� : %d\n", *pa);
	printf("������ �޸� ���� �� : %x\n", &a);
	printf("�����Ͱ� ������ �޸��� ��ġ : %x\n", pa);
	printf("�������� �޸� ��ġ : %x\n", &pa);
	printf("�����Ͱ� ������ �޸��� �� : %d\n", *pa);
	






	return 0;
}