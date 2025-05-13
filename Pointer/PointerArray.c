#include <stdio.h>

int main() {

	int a[4] = { 10, 20, 30, 40 };

	int* pa;
	int i;

	//배열의 이름은 배열의 시작 주소이다.
	printf("%d %x %x\n", a[0],&a[0], a);
	printf("%d %x %x\n", a[1], &a[1], a+1);

	for (i = 0; i < (sizeof(a) / sizeof(a[0])); i++) {
		printf("%d %x %x\n", a[i], &a[i], a+i);
	}
	pa = a;
	// &를 안쓰는 이유 a는 배열이기 때문에 &를 사용할 필요가 없다.
	for (i = 0; i < (sizeof(a) / sizeof(a[0])); i++) {
		printf("%d %x %x\n", *(pa+i), pa+i, pa + i);
	}

	return 0;
}