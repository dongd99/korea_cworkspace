#include <stdio.h>	

int add10(int a);

int main() {
	int score = 10;

	score = add10(score);
	printf("%d", score);

	return 0;
}

int add10(int x) {
	x = x + 10;

	return x;
}