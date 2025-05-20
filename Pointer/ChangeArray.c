#include <stdio.h>

void changeArray(int*ptr) {

	ptr[1] = 50;

}

int main() {

	int arr[] = { 10, 20, 30 };
	int* pa;
	pa = arr;

	changeArray(pa);

	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", arr[i]);
	}
	 







	return 0;
}