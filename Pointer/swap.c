#include <stdio.h>

void callByValue(int a, int b);
void callByRef(int* a, int* b);

int main() {

	int x = 1, y = 2;
	int temp;
	printf("교환전\n");
	printf("x = %d, y = %d\n", x, y);

	/*temp = x;
	x = y;
	y = temp;*/
	callByValue(x, y);
	callByRef(&x, &y);
	







	printf("교환후\n");
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