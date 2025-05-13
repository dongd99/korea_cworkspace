#include <stdio.h>

int square(int x) {
	return x * x;
}

float triangle(int x, int y) {
	return (float)x * y / 2;
}

void main() {
	int sagak;
	sagak = square(4);
	
	float tri = triangle(5, 13);

	printf("Á¤»ç°¢ÇüÀÇ ³ĞÀÌ : %d\n", sagak);

	printf("»ï°¢ÇüÀÇ ³ĞÀÌ : %.2fcm\n", tri);




}