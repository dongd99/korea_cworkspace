#include <stdio.h>

int main() {

	char arr[] = { '1', 'B','C','D','E' };
	char* p;
	p = arr;
	printf("%c%c", *(p + 2), *p);

	return 0;
}