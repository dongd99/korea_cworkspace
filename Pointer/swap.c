#include <stdio.h>

void callByValue(int a, int b);
void callByRef(int* a, int* b);

int main() {

	int x = 1, y = 2;
	int temp;
	printf("��ȯ��\n");
	printf("x = %d, y = %d\n", x, y);

	/*temp = x;
	x = y;
	y = temp;*/
	callByValue(x, y);
	callByRef(&x, &y);
	







	printf("��ȯ��\n");
	printf("x = %d, y = %d\n", x, y);


	return 0;
}

void callByValue(int a, int b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
	
}
void callByRef(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}