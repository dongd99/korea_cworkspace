#include <stdio.h>

int main() {

	int a[4] = { 10, 20, 30, 40 };

	int* pa;
	int i;

	//�迭�� �̸��� �迭�� ���� �ּ��̴�.
	printf("%d %x %x\n", a[0],&a[0], a);
	printf("%d %x %x\n", a[1], &a[1], a+1);

	for (i = 0; i < (sizeof(a) / sizeof(a[0])); i++) {
		printf("%d %x %x\n", a[i], &a[i], a+i);
	}
	pa = a;
	// &�� �Ⱦ��� ���� a�� �迭�̱� ������ &�� ����� �ʿ䰡 ����.
	for (i = 0; i < (sizeof(a) / sizeof(a[0])); i++) {
		printf("%d %x %x\n", *(pa+i), pa+i, pa + i);
	}

	return 0;
}